`include "../rv32is.v"

`include "./dmem.v"
`include "./testmem.v"
`include "./testdmem.v"

`timescale 1 ns / 10 ps
module cpu_batch_vlg_tst();

integer numcycles;  //number of cycles in test

reg clk,reset;  //clk and reset signals

reg[8*15:1] testcase; //name of testcase

// CPU declaration

// signals
wire [31:0] iaddr,idataout;
wire iclk;
wire [31:0] daddr,ddataout,ddatain;
wire drdclk, dwrclk, dwe;
wire [2:0]  dop;
wire [31:0] cpudbgdata;



//main CPU
rv32is mycpu(.clock(clk), 
             .reset(reset), 
				 .imemaddr(iaddr), .imemdataout(idataout), .imemclk(iclk), 
				 .dmemaddr(daddr), .dmemdataout(ddataout), .dmemdatain(ddatain), .dmemrdclk(drdclk), .dmemwrclk(dwrclk), .dmemop(dop), .dmemwe(dwe), 
				 .dbgdata(cpudbgdata));

				  
//instruction memory, no writing
testmem instructions(
	.address(iaddr[17:2]),
	.clock(iclk),
	.data(32'b0),
	.wren(1'b0),
	.q(idataout));
	

//data memory	
dmem datamem(.addr(daddr), 
             .dataout(ddataout), 
				 .datain(ddatain), 
				 .rdclk(drdclk), 
				 .wrclk(dwrclk), 
				 .memop(dop), 
				 .we(dwe));

//useful tasks
task step;  //step for one cycle ends 1ns AFTER the posedge of the next cycle
	begin
		#9  clk=1'b0; 
		#10 clk=1'b1;
		numcycles = numcycles + 1;	
		#1 ;
	end
endtask
				  
task stepn; //step n cycles
   input integer n; 
	integer i;
	begin
		for (i =0; i<n ; i=i+1)
			step();
	end
endtask

task resetcpu;  //reset the CPU and the test
	begin
		reset = 1'b1; 
		step();
		#5 reset = 1'b0;
		numcycles = 0;
	end
endtask

task loadtestcase;  //load intstructions to instruction mem
	begin
		$readmemh({testcase, ".hex"},instructions.ram);
		$display("~~~ Begin test case %s ~~~", testcase);
	end
endtask
	
task checkreg;//check registers
   input [4:0] regid;
	input [31:0] results; 
	reg [31:0] debugdata;
	begin
	    debugdata=mycpu.myregfile.regs[regid]; //wait for signal to settle
		 if(debugdata==results)
		 	begin
				$display("~~~ OK: end of cycle %d reg %h need to be %h, get %h", numcycles-1, regid, results, debugdata);
			end
		else	
			begin
				$display("~~~ Error: end of cycle %d reg %h need to be %h, get %h", numcycles-1, regid, results, debugdata);
			 end
	end
endtask

task checkmem;//check registers
   input [31:0] inputaddr;
   input [31:0] results;	
	reg [31:0] debugdata;
	reg [14:0] dmemaddr;
	begin
	    dmemaddr=inputaddr[16:2];
	    debugdata=datamem.mymem.ram[dmemaddr]; 
		 if(debugdata==results)
		 	begin
				$display("~~~ OK: end of cycle %d mem addr= %h need to be %h, get %h", numcycles-1, inputaddr, results, debugdata);
			end
		else	
			begin
				$display("~~~ Error: end of cycle %d mem addr= %h need to be %h, get %h", numcycles-1, inputaddr, results, debugdata);
			 end
	end
endtask

task checkpc;//check PC
	input [31:0] results; 
	begin
		 if(cpudbgdata==results)
		 	begin
				$display("~~~ OK: end of cycle %3d PC/dbgdata need to be %h, get %h", numcycles,  results, cpudbgdata);
			end
		else	
			begin
				$display("~~~ Error: end of cycle %3d PC/dbgdata need to be %h, get %h", numcycles, results, cpudbgdata);
			 end
	end
endtask

integer maxcycles =10000;

task run;
   integer i;
	begin
	   i = 0;
	   while( (idataout!=32'hdead10cc) && (i<maxcycles))
		begin
		   step();
			i=i+1;
		end
	end
endtask

task checkmagnum;
    begin
	    if(numcycles>=maxcycles)
		 begin
		   $display("~~~ Error:test case %s does not terminate!", testcase);
		 end
		 else if(mycpu.myregfile.regs[10]==32'hc0ffee)
		    begin
		       $display("~~~ OK:test case %s finshed OK at cycle %3d.", testcase, numcycles-1);
		    end
		 else if(mycpu.myregfile.regs[10]==32'hdeaddead)
		 begin
		   $display("~~~ ERROR:test case %s finshed with error in cycle %3d.", testcase, numcycles-1);
		 end
		 else
		 begin
		    $display("~~~ ERROR:test case %s unknown error in cycle %3d.", testcase, numcycles-1);
		 end
	 end
endtask

task loaddatamem;
    begin
	     $readmemh({testcase, "_d.hex"},datamem.mymem.ram);
	 end
endtask

task run_riscv_test;
    begin
	   loadtestcase();
		loaddatamem();
		resetcpu();
		run();
		checkmagnum();
	 end
endtask
	
initial begin:TestBench
	$display("start a standard test for Module RV32IS."); 	// 打印开始标记
	$dumpfile("rv32is_wave.vcd");                  // 指定记录模拟波形的文件
	$dumpvars(0, cpu_batch_vlg_tst);                     // 指定记录的模块层级
      #80
      // output the state of every instruction
	// 	testcase = "rv32ui-p-simple";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-add";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-addi";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-and";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-andi";
	// 	run_riscv_test();
	//    testcase = "rv32ui-p-auipc";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-beq";
	// 	run_riscv_test();
	// 	testcase = "rv32ui-p-bge";
	// 	run_riscv_test();
		// testcase = "rv32ui-p-bgeu";
		// run_riscv_test();
		// testcase = "rv32ui-p-blt";
		// run_riscv_test();
		// testcase = "rv32ui-p-bltu";
		// run_riscv_test();
		// testcase = "rv32ui-p-bne";
		// run_riscv_test();
		// testcase = "rv32ui-p-jal";
		// run_riscv_test();
		// testcase = "rv32ui-p-jalr";
		// run_riscv_test();
		// testcase = "rv32ui-p-lb";
		// run_riscv_test();
		// testcase = "rv32ui-p-lbu";
		// run_riscv_test();
		// testcase = "rv32ui-p-lh";
		// run_riscv_test();
		// testcase = "rv32ui-p-lhu";
		// run_riscv_test();
		testcase = "rv32ui-p-lui";
		run_riscv_test();
		// testcase = "rv32ui-p-lw";
		// run_riscv_test();
		// testcase = "rv32ui-p-or";
		// run_riscv_test();
		// testcase = "rv32ui-p-ori";
		// run_riscv_test();
		// testcase = "rv32ui-p-sb";
		// run_riscv_test();
		// testcase = "rv32ui-p-sh";
		// run_riscv_test();
		// testcase = "rv32ui-p-sll";
		// run_riscv_test();
		// testcase = "rv32ui-p-slli";
		// run_riscv_test();
		// testcase = "rv32ui-p-slt";
		// run_riscv_test();
		// testcase = "rv32ui-p-slti";
		// run_riscv_test();
		// testcase = "rv32ui-p-sltiu";
		// run_riscv_test();
		// testcase = "rv32ui-p-sltu";
		// run_riscv_test();
		// testcase = "rv32ui-p-sra";
		// run_riscv_test();
		// testcase = "rv32ui-p-srai";
		// run_riscv_test();
		// testcase = "rv32ui-p-srl";
		// run_riscv_test();
		// testcase = "rv32ui-p-srli";
		// run_riscv_test();
		// testcase = "rv32ui-p-sub";
		// run_riscv_test();
		// testcase = "rv32ui-p-sw";
		// run_riscv_test();
		// testcase = "rv32ui-p-xor";
		// run_riscv_test();
		// testcase = "rv32ui-p-xori";
		// run_riscv_test();	
		// $stop;
		$finish;
		
end

				  
endmodule
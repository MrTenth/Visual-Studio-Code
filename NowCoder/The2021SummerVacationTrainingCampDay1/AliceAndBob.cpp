#include <iostream>
#include <utility>
#include <map>
using namespace std;
#define mp make_pair

map <pair <int, int>, bool> t;
void addCase() {
t[mp(0, 0)] = 1;
t[mp(2, 3)] = 1;
t[mp(5, 7)] = 1;
t[mp(9, 12)] = 1;
t[mp(11, 15)] = 1;
t[mp(14, 20)] = 1;
t[mp(17, 22)] = 1;
t[mp(19, 33)] = 1;
t[mp(24, 32)] = 1;
t[mp(26, 35)] = 1;
t[mp(28, 58)] = 1;
t[mp(29, 40)] = 1;
t[mp(31, 38)] = 1;
t[mp(37, 53)] = 1;
t[mp(42, 52)] = 1;
t[mp(44, 75)] = 1;
t[mp(45, 60)] = 1;
t[mp(47, 65)] = 1;
t[mp(49, 70)] = 1;
t[mp(50, 62)] = 1;
t[mp(55, 68)] = 1;
t[mp(57, 79)] = 1;
t[mp(64, 87)] = 1;
t[mp(67, 86)] = 1;
t[mp(72, 92)] = 1;
t[mp(74, 99)] = 1;
t[mp(77, 101)] = 1;
t[mp(81, 174)] = 1;
t[mp(82, 118)] = 1;
t[mp(83, 110)] = 1;
t[mp(85, 113)] = 1;
t[mp(89, 123)] = 1;
t[mp(90, 116)] = 1;
t[mp(94, 129)] = 1;
t[mp(95, 127)] = 1;
t[mp(97, 126)] = 1;
t[mp(103, 136)] = 1;
t[mp(105, 199)] = 1;
t[mp(106, 146)] = 1;
t[mp(108, 145)] = 1;
t[mp(112, 166)] = 1;
t[mp(115, 246)] = 1;
t[mp(120, 161)] = 1;
t[mp(122, 160)] = 1;
t[mp(125, 164)] = 1;
t[mp(131, 309)] = 1;
t[mp(132, 182)] = 1;
t[mp(133, 177)] = 1;
t[mp(135, 198)] = 1;
t[mp(138, 180)] = 1;
t[mp(139, 156)] = 1;
t[mp(141, 239)] = 1;
t[mp(142, 190)] = 1;
t[mp(143, 186)] = 1;
t[mp(148, 203)] = 1;
t[mp(149, 195)] = 1;
t[mp(151, 340)] = 1;
t[mp(152, 197)] = 1;
t[mp(154, 232)] = 1;
t[mp(158, 218)] = 1;
t[mp(163, 229)] = 1;
t[mp(168, 215)] = 1;
t[mp(170, 286)] = 1;
t[mp(171, 228)] = 1;
t[mp(172, 224)] = 1;
t[mp(176, 350)] = 1;
t[mp(179, 298)] = 1;
t[mp(184, 253)] = 1;
t[mp(185, 236)] = 1;
t[mp(188, 268)] = 1;
t[mp(189, 259)] = 1;
t[mp(192, 241)] = 1;
t[mp(194, 256)] = 1;
t[mp(201, 266)] = 1;
t[mp(205, 281)] = 1;
t[mp(207, 274)] = 1;
t[mp(208, 264)] = 1;
t[mp(210, 271)] = 1;
t[mp(212, 322)] = 1;
t[mp(213, 317)] = 1;
t[mp(214, 278)] = 1;
t[mp(217, 289)] = 1;
t[mp(220, 327)] = 1;
t[mp(221, 280)] = 1;
t[mp(223, 315)] = 1;
t[mp(226, 301)] = 1;
t[mp(231, 332)] = 1;
t[mp(234, 307)] = 1;
t[mp(238, 372)] = 1;
t[mp(243, 391)] = 1;
t[mp(244, 325)] = 1;
t[mp(245, 313)] = 1;
t[mp(248, 306)] = 1;
t[mp(250, 321)] = 1;
t[mp(252, 305)] = 1;
t[mp(255, 339)] = 1;
t[mp(258, 565)] = 1;
t[mp(261, 346)] = 1;
t[mp(263, 359)] = 1;
t[mp(270, 375)] = 1;
t[mp(273, 521)] = 1;
t[mp(276, 358)] = 1;
t[mp(283, 370)] = 1;
t[mp(285, 362)] = 1;
t[mp(288, 379)] = 1;
t[mp(291, 456)] = 1;
t[mp(293, 367)] = 1;
t[mp(295, 390)] = 1;
t[mp(296, 386)] = 1;
t[mp(300, 432)] = 1;
t[mp(303, 415)] = 1;
t[mp(311, 464)] = 1;
t[mp(312, 411)] = 1;
t[mp(319, 408)] = 1;
t[mp(324, 501)] = 1;
t[mp(329, 435)] = 1;
t[mp(331, 702)] = 1;
t[mp(334, 454)] = 1;
t[mp(336, 545)] = 1;
t[mp(337, 489)] = 1;
t[mp(338, 449)] = 1;
t[mp(342, 496)] = 1;
t[mp(343, 446)] = 1;
t[mp(345, 445)] = 1;
t[mp(348, 558)] = 1;
t[mp(349, 467)] = 1;
t[mp(352, 461)] = 1;
t[mp(354, 590)] = 1;
t[mp(355, 577)] = 1;
t[mp(356, 532)] = 1;
t[mp(357, 479)] = 1;
t[mp(361, 478)] = 1;
t[mp(364, 494)] = 1;
t[mp(366, 527)] = 1;
t[mp(369, 520)] = 1;
t[mp(374, 509)] = 1;
t[mp(377, 505)] = 1;
t[mp(381, 639)] = 1;
t[mp(382, 553)] = 1;
t[mp(384, 470)] = 1;
t[mp(388, 485)] = 1;
t[mp(393, 518)] = 1;
t[mp(395, 474)] = 1;
t[mp(397, 511)] = 1;
t[mp(399, 487)] = 1;
t[mp(400, 483)] = 1;
t[mp(402, 588)] = 1;
t[mp(404, 601)] = 1;
t[mp(405, 531)] = 1;
t[mp(407, 530)] = 1;
t[mp(410, 568)] = 1;
t[mp(413, 537)] = 1;
t[mp(417, 586)] = 1;
t[mp(419, 557)] = 1;
t[mp(420, 541)] = 1;
t[mp(421, 529)] = 1;
t[mp(423, 525)] = 1;
t[mp(425, 580)] = 1;
t[mp(427, 560)] = 1;
t[mp(429, 719)] = 1;
t[mp(430, 624)] = 1;
t[mp(431, 570)] = 1;
t[mp(434, 549)] = 1;
t[mp(437, 574)] = 1;
t[mp(439, 603)] = 1;
t[mp(440, 600)] = 1;
t[mp(442, 683)] = 1;
t[mp(443, 556)] = 1;
t[mp(448, 614)] = 1;
t[mp(451, 871)] = 1;
t[mp(452, 651)] = 1;
t[mp(453, 620)] = 1;
t[mp(458, 772)] = 1;
t[mp(459, 671)] = 1;
t[mp(460, 596)] = 1;
t[mp(463, 661)] = 1;
t[mp(466, 666)] = 1;
t[mp(469, 610)] = 1;
t[mp(472, 761)] = 1;
t[mp(473, 632)] = 1;
t[mp(476, 760)] = 1;
t[mp(477, 691)] = 1;
t[mp(481, 660)] = 1;
t[mp(491, 726)] = 1;
t[mp(492, 635)] = 1;
t[mp(498, 673)] = 1;
t[mp(499, 646)] = 1;
t[mp(503, 653)] = 1;
t[mp(504, 649)] = 1;
t[mp(507, 788)] = 1;
t[mp(508, 648)] = 1;
t[mp(513, 776)] = 1;
t[mp(514, 716)] = 1;
t[mp(515, 664)] = 1;
t[mp(516, 658)] = 1;
t[mp(523, 740)] = 1;
t[mp(534, 893)] = 1;
t[mp(535, 855)] = 1;
t[mp(539, 752)] = 1;
t[mp(540, 735)] = 1;
t[mp(543, 723)] = 1;
t[mp(547, 825)] = 1;
t[mp(548, 800)] = 1;
t[mp(551, 697)] = 1;
t[mp(555, 711)] = 1;
t[mp(562, 1202)] = 1;
t[mp(563, 771)] = 1;
t[mp(564, 693)] = 1;
t[mp(567, 737)] = 1;
t[mp(572, 744)] = 1;
t[mp(576, 766)] = 1;
t[mp(579, 780)] = 1;
t[mp(582, 986)] = 1;
t[mp(583, 768)] = 1;
t[mp(585, 748)] = 1;
t[mp(592, 877)] = 1;
t[mp(593, 811)] = 1;
t[mp(594, 805)] = 1;
t[mp(595, 722)] = 1;
t[mp(598, 1599)] = 1;
t[mp(599, 828)] = 1;
t[mp(605, 866)] = 1;
t[mp(606, 845)] = 1;
t[mp(607, 810)] = 1;
t[mp(609, 849)] = 1;
t[mp(612, 842)] = 1;
t[mp(616, 831)] = 1;
t[mp(617, 822)] = 1;
t[mp(619, 787)] = 1;
t[mp(622, 818)] = 1;
t[mp(626, 799)] = 1;
t[mp(628, 785)] = 1;
t[mp(630, 836)] = 1;
t[mp(634, 778)] = 1;
t[mp(637, 879)] = 1;
t[mp(641, 886)] = 1;
t[mp(643, 899)] = 1;
t[mp(644, 827)] = 1;
t[mp(655, 1046)] = 1;
t[mp(656, 918)] = 1;
t[mp(657, 876)] = 1;
t[mp(663, 870)] = 1;
t[mp(668, 989)] = 1;
t[mp(669, 929)] = 1;
t[mp(675, 985)] = 1;
t[mp(676, 857)] = 1;
t[mp(678, 912)] = 1;
t[mp(679, 904)] = 1;
t[mp(680, 896)] = 1;
t[mp(682, 1107)] = 1;
t[mp(685, 869)] = 1;
t[mp(687, 964)] = 1;
t[mp(689, 920)] = 1;
t[mp(695, 883)] = 1;
t[mp(699, 946)] = 1;
t[mp(700, 937)] = 1;
t[mp(704, 948)] = 1;
t[mp(706, 910)] = 1;
t[mp(708, 957)] = 1;
t[mp(710, 892)] = 1;
t[mp(713, 996)] = 1;
t[mp(714, 935)] = 1;
t[mp(718, 969)] = 1;
t[mp(721, 976)] = 1;
t[mp(725, 1358)] = 1;
t[mp(728, 1010)] = 1;
t[mp(730, 917)] = 1;
t[mp(732, 924)] = 1;
t[mp(734, 1167)] = 1;
t[mp(739, 1062)] = 1;
t[mp(742, 1036)] = 1;
t[mp(743, 1007)] = 1;
t[mp(746, 1065)] = 1;
t[mp(747, 1000)] = 1;
t[mp(750, 982)] = 1;
t[mp(751, 944)] = 1;
t[mp(754, 1020)] = 1;
t[mp(756, 1013)] = 1;
t[mp(757, 995)] = 1;
t[mp(759, 1854)] = 1;
t[mp(763, 991)] = 1;
t[mp(765, 1038)] = 1;
t[mp(770, 1150)] = 1;
t[mp(774, 1017)] = 1;
t[mp(782, 1032)] = 1;
t[mp(784, 1085)] = 1;
t[mp(790, 1082)] = 1;
t[mp(791, 1061)] = 1;
t[mp(793, 1090)] = 1;
t[mp(794, 956)] = 1;
t[mp(796, 1029)] = 1;
t[mp(797, 1023)] = 1;
t[mp(802, 1777)] = 1;
t[mp(803, 1072)] = 1;
t[mp(807, 1081)] = 1;
t[mp(808, 1079)] = 1;
t[mp(813, 1118)] = 1;
t[mp(814, 1117)] = 1;
t[mp(815, 1110)] = 1;
t[mp(816, 1040)] = 1;
t[mp(820, 1131)] = 1;
t[mp(824, 1070)] = 1;
t[mp(830, 1098)] = 1;
t[mp(833, 1053)] = 1;
t[mp(835, 1122)] = 1;
t[mp(838, 1201)] = 1;
t[mp(839, 1165)] = 1;
t[mp(841, 1322)] = 1;
t[mp(844, 1241)] = 1;
t[mp(847, 1225)] = 1;
t[mp(848, 1120)] = 1;
t[mp(851, 1190)] = 1;
t[mp(852, 1106)] = 1;
t[mp(853, 1076)] = 1;
t[mp(859, 1145)] = 1;
t[mp(861, 1206)] = 1;
t[mp(862, 1180)] = 1;
t[mp(863, 1130)] = 1;
t[mp(864, 1055)] = 1;
t[mp(868, 1156)] = 1;
t[mp(873, 1384)] = 1;
t[mp(874, 1212)] = 1;
t[mp(875, 1102)] = 1;
t[mp(881, 1194)] = 1;
t[mp(882, 1175)] = 1;
t[mp(885, 1164)] = 1;
t[mp(888, 1192)] = 1;
t[mp(890, 1186)] = 1;
t[mp(895, 1285)] = 1;
t[mp(898, 1227)] = 1;
t[mp(901, 2018)] = 1;
t[mp(902, 1211)] = 1;
t[mp(906, 1208)] = 1;
t[mp(908, 1261)] = 1;
t[mp(909, 1231)] = 1;
t[mp(914, 1245)] = 1;
t[mp(915, 1214)] = 1;
t[mp(922, 1394)] = 1;
t[mp(923, 1269)] = 1;
t[mp(926, 1363)] = 1;
t[mp(927, 1243)] = 1;
t[mp(931, 1274)] = 1;
t[mp(933, 1307)] = 1;
t[mp(939, 1405)] = 1;
t[mp(940, 1268)] = 1;
t[mp(942, 1381)] = 1;
t[mp(943, 1219)] = 1;
t[mp(950, 1265)] = 1;
t[mp(952, 1314)] = 1;
t[mp(954, 1254)] = 1;
t[mp(959, 1311)] = 1;
t[mp(960, 1297)] = 1;
t[mp(962, 1420)] = 1;
t[mp(963, 1295)] = 1;
t[mp(966, 1390)] = 1;
t[mp(967, 1279)] = 1;
t[mp(971, 1337)] = 1;
t[mp(972, 1302)] = 1;
t[mp(973, 1248)] = 1;
t[mp(975, 3859)] = 1;
t[mp(978, 1284)] = 1;
t[mp(980, 1547)] = 1;
t[mp(981, 1348)] = 1;
t[mp(984, 1317)] = 1;
t[mp(988, 1451)] = 1;
t[mp(993, 1378)] = 1;
t[mp(994, 1329)] = 1;
t[mp(998, 1812)] = 1;
t[mp(999, 1372)] = 1;
t[mp(1002, 1336)] = 1;
t[mp(1004, 1461)] = 1;
t[mp(1005, 1400)] = 1;
t[mp(1006, 1346)] = 1;
t[mp(1009, 1366)] = 1;
t[mp(1012, 1361)] = 1;
t[mp(1015, 1465)] = 1;
t[mp(1016, 1432)] = 1;
t[mp(1019, 1419)] = 1;
t[mp(1022, 1477)] = 1;
t[mp(1025, 1376)] = 1;
t[mp(1027, 1292)] = 1;
t[mp(1031, 1633)] = 1;
t[mp(1034, 1389)] = 1;
t[mp(1035, 1371)] = 1;
t[mp(1042, 1527)] = 1;
t[mp(1043, 1334)] = 1;
t[mp(1045, 1387)] = 1;
t[mp(1048, 1458)] = 1;
t[mp(1050, 2369)] = 1;
t[mp(1051, 1331)] = 1;
t[mp(1057, 1695)] = 1;
t[mp(1058, 1414)] = 1;
t[mp(1060, 1408)] = 1;
t[mp(1064, 1446)] = 1;
t[mp(1067, 1543)] = 1;
t[mp(1068, 1521)] = 1;
t[mp(1069, 1413)] = 1;
t[mp(1074, 1514)] = 1;
t[mp(1075, 1492)] = 1;
t[mp(1078, 1428)] = 1;
t[mp(1084, 1687)] = 1;
t[mp(1087, 1499)] = 1;
t[mp(1088, 1457)] = 1;
t[mp(1089, 1397)] = 1;
t[mp(1092, 1468)] = 1;
t[mp(1094, 1455)] = 1;
t[mp(1096, 1443)] = 1;
t[mp(1100, 1425)] = 1;
t[mp(1104, 1464)] = 1;
t[mp(1109, 1481)] = 1;
t[mp(1112, 1606)] = 1;
t[mp(1113, 1539)] = 1;
t[mp(1115, 1758)] = 1;
t[mp(1116, 1484)] = 1;
t[mp(1124, 1510)] = 1;
t[mp(1125, 1449)] = 1;
t[mp(1127, 1626)] = 1;
t[mp(1129, 1516)] = 1;
t[mp(1133, 1575)] = 1;
t[mp(1134, 1509)] = 1;
t[mp(1136, 1532)] = 1;
t[mp(1137, 1502)] = 1;
t[mp(1139, 1537)] = 1;
t[mp(1140, 1438)] = 1;
t[mp(1142, 1563)] = 1;
t[mp(1143, 1470)] = 1;
t[mp(1144, 1403)] = 1;
t[mp(1147, 2604)] = 1;
t[mp(1148, 1674)] = 1;
t[mp(1149, 1581)] = 1;
t[mp(1152, 1541)] = 1;
t[mp(1153, 1536)] = 1;
t[mp(1155, 1534)] = 1;
t[mp(1158, 1569)] = 1;
t[mp(1159, 1529)] = 1;
t[mp(1161, 1525)] = 1;
t[mp(1163, 1592)] = 1;
t[mp(1169, 1561)] = 1;
t[mp(1171, 1612)] = 1;
t[mp(1173, 1619)] = 1;
t[mp(1174, 1491)] = 1;
t[mp(1177, 2077)] = 1;
t[mp(1178, 1577)] = 1;
t[mp(1182, 2623)] = 1;
t[mp(1183, 1560)] = 1;
t[mp(1185, 1665)] = 1;
t[mp(1188, 1611)] = 1;
t[mp(1196, 1906)] = 1;
t[mp(1197, 1590)] = 1;
t[mp(1199, 1653)] = 1;
t[mp(1200, 1636)] = 1;
t[mp(1204, 1679)] = 1;
t[mp(1210, 2455)] = 1;
t[mp(1216, 1736)] = 1;
t[mp(1217, 1625)] = 1;
t[mp(1221, 1640)] = 1;
t[mp(1223, 1929)] = 1;
t[mp(1224, 1717)] = 1;
t[mp(1229, 1617)] = 1;
t[mp(1233, 1730)] = 1;
t[mp(1235, 1678)] = 1;
t[mp(1236, 1651)] = 1;
t[mp(1237, 1643)] = 1;
t[mp(1238, 1622)] = 1;
t[mp(1239, 1580)] = 1;
t[mp(1247, 1605)] = 1;
t[mp(1250, 1820)] = 1;
t[mp(1251, 1746)] = 1;
t[mp(1253, 1721)] = 1;
t[mp(1256, 2215)] = 1;
t[mp(1257, 1799)] = 1;
t[mp(1258, 1661)] = 1;
t[mp(1260, 1708)] = 1;
t[mp(1263, 1769)] = 1;
t[mp(1264, 1713)] = 1;
t[mp(1267, 1795)] = 1;
t[mp(1271, 2004)] = 1;
t[mp(1272, 1707)] = 1;
t[mp(1276, 1694)] = 1;
t[mp(1278, 1692)] = 1;
t[mp(1281, 1682)] = 1;
t[mp(1283, 1664)] = 1;
t[mp(1287, 1882)] = 1;
t[mp(1289, 1702)] = 1;
t[mp(1290, 1684)] = 1;
t[mp(1294, 1866)] = 1;
t[mp(1299, 1845)] = 1;
t[mp(1300, 1756)] = 1;
t[mp(1301, 1710)] = 1;
t[mp(1304, 1825)] = 1;
t[mp(1305, 1765)] = 1;
t[mp(1309, 1832)] = 1;
t[mp(1310, 1774)] = 1;
t[mp(1313, 2810)] = 1;
t[mp(1316, 1767)] = 1;
t[mp(1319, 1811)] = 1;
t[mp(1320, 1754)] = 1;
t[mp(1324, 2388)] = 1;
t[mp(1325, 1787)] = 1;
t[mp(1327, 1729)] = 1;
t[mp(1333, 2140)] = 1;
t[mp(1339, 1822)] = 1;
t[mp(1340, 1785)] = 1;
t[mp(1342, 1850)] = 1;
t[mp(1343, 1802)] = 1;
t[mp(1344, 1782)] = 1;
t[mp(1350, 2840)] = 1;
t[mp(1351, 2288)] = 1;
t[mp(1352, 1842)] = 1;
t[mp(1354, 1831)] = 1;
t[mp(1356, 1888)] = 1;
t[mp(1357, 1762)] = 1;
t[mp(1360, 1838)] = 1;
t[mp(1365, 1879)] = 1;
t[mp(1368, 1884)] = 1;
t[mp(1369, 1878)] = 1;
t[mp(1370, 1859)] = 1;
t[mp(1374, 2836)] = 1;
t[mp(1375, 2036)] = 1;
t[mp(1380, 1824)] = 1;
t[mp(1383, 1919)] = 1;
t[mp(1386, 1904)] = 1;
t[mp(1392, 1863)] = 1;
t[mp(1396, 1901)] = 1;
t[mp(1399, 1978)] = 1;
t[mp(1402, 1966)] = 1;
t[mp(1407, 1914)] = 1;
t[mp(1410, 1877)] = 1;
t[mp(1412, 2042)] = 1;
t[mp(1416, 1847)] = 1;
t[mp(1418, 1772)] = 1;
t[mp(1422, 1935)] = 1;
t[mp(1424, 2040)] = 1;
t[mp(1427, 2981)] = 1;
t[mp(1430, 1837)] = 1;
t[mp(1434, 1975)] = 1;
t[mp(1436, 1953)] = 1;
t[mp(1437, 1923)] = 1;
t[mp(1440, 2051)] = 1;
t[mp(1441, 1994)] = 1;
t[mp(1442, 1869)] = 1;
t[mp(1445, 2209)] = 1;
t[mp(1448, 1949)] = 1;
t[mp(1453, 2007)] = 1;
t[mp(1460, 1947)] = 1;
t[mp(1463, 2011)] = 1;
t[mp(1467, 2230)] = 1;
t[mp(1472, 1942)] = 1;
t[mp(1474, 2205)] = 1;
t[mp(1475, 1922)] = 1;
t[mp(1479, 2031)] = 1;
t[mp(1480, 1941)] = 1;
t[mp(1483, 2134)] = 1;
t[mp(1486, 2657)] = 1;
t[mp(1487, 2026)] = 1;
t[mp(1489, 2107)] = 1;
t[mp(1490, 2030)] = 1;
t[mp(1494, 1992)] = 1;
t[mp(1495, 1964)] = 1;
t[mp(1497, 1997)] = 1;
t[mp(1501, 2098)] = 1;
t[mp(1504, 1986)] = 1;
t[mp(1505, 1970)] = 1;
t[mp(1507, 2003)] = 1;
t[mp(1508, 1981)] = 1;
t[mp(1512, 2191)] = 1;
t[mp(1513, 2088)] = 1;
t[mp(1518, 2096)] = 1;
t[mp(1520, 1972)] = 1;
t[mp(1523, 3303)] = 1;
t[mp(1524, 2059)] = 1;
t[mp(1531, 2076)] = 1;
t[mp(1545, 2390)] = 1;
t[mp(1546, 2056)] = 1;
t[mp(1549, 2421)] = 1;
t[mp(1550, 2094)] = 1;
t[mp(1551, 2070)] = 1;
t[mp(1553, 2129)] = 1;
t[mp(1554, 2033)] = 1;
t[mp(1555, 2029)] = 1;
t[mp(1557, 2116)] = 1;
t[mp(1559, 3159)] = 1;
t[mp(1565, 2067)] = 1;
t[mp(1566, 2050)] = 1;
t[mp(1568, 2105)] = 1;
t[mp(1571, 2001)] = 1;
t[mp(1573, 2256)] = 1;
t[mp(1574, 2161)] = 1;
t[mp(1579, 2103)] = 1;
t[mp(1583, 2338)] = 1;
t[mp(1584, 2180)] = 1;
t[mp(1586, 2148)] = 1;
t[mp(1587, 2137)] = 1;
t[mp(1588, 2100)] = 1;
t[mp(1589, 2080)] = 1;
t[mp(1594, 2168)] = 1;
t[mp(1596, 3385)] = 1;
t[mp(1597, 2085)] = 1;
t[mp(1601, 2195)] = 1;
t[mp(1603, 2152)] = 1;
t[mp(1604, 2142)] = 1;
t[mp(1608, 2329)] = 1;
t[mp(1609, 2281)] = 1;
t[mp(1610, 2203)] = 1;
t[mp(1614, 2198)] = 1;
t[mp(1616, 2176)] = 1;
t[mp(1621, 2184)] = 1;
t[mp(1624, 2669)] = 1;
t[mp(1628, 2194)] = 1;
t[mp(1630, 2145)] = 1;
t[mp(1632, 3560)] = 1;
t[mp(1635, 2302)] = 1;
t[mp(1638, 2229)] = 1;
t[mp(1642, 2224)] = 1;
t[mp(1645, 2954)] = 1;
t[mp(1646, 2298)] = 1;
t[mp(1647, 2276)] = 1;
t[mp(1648, 2255)] = 1;
t[mp(1650, 2239)] = 1;
t[mp(1655, 2310)] = 1;
t[mp(1657, 2182)] = 1;
t[mp(1659, 2217)] = 1;
t[mp(1663, 2193)] = 1;
t[mp(1667, 2640)] = 1;
t[mp(1668, 2366)] = 1;
t[mp(1669, 2356)] = 1;
t[mp(1670, 2174)] = 1;
t[mp(1672, 2293)] = 1;
t[mp(1673, 2202)] = 1;
t[mp(1676, 2347)] = 1;
t[mp(1681, 2271)] = 1;
t[mp(1686, 3335)] = 1;
t[mp(1689, 2437)] = 1;
t[mp(1690, 2237)] = 1;
t[mp(1691, 2222)] = 1;
t[mp(1697, 4572)] = 1;
t[mp(1698, 2297)] = 1;
t[mp(1699, 2268)] = 1;
t[mp(1700, 2261)] = 1;
t[mp(1701, 2234)] = 1;
t[mp(1704, 2132)] = 1;
t[mp(1706, 2287)] = 1;
t[mp(1712, 2246)] = 1;
t[mp(1715, 2607)] = 1;
t[mp(1716, 2439)] = 1;
t[mp(1719, 2341)] = 1;
t[mp(1723, 2368)] = 1;
t[mp(1724, 2322)] = 1;
t[mp(1726, 2335)] = 1;
t[mp(1728, 2283)] = 1;
t[mp(1732, 2376)] = 1;
t[mp(1734, 3235)] = 1;
t[mp(1735, 2495)] = 1;
t[mp(1738, 2427)] = 1;
t[mp(1740, 2490)] = 1;
t[mp(1741, 2163)] = 1;
t[mp(1743, 2362)] = 1;
t[mp(1744, 2350)] = 1;
t[mp(1745, 2318)] = 1;
t[mp(1748, 3156)] = 1;
t[mp(1749, 2453)] = 1;
t[mp(1751, 2254)] = 1;
t[mp(1753, 2345)] = 1;
t[mp(1760, 2426)] = 1;
t[mp(1761, 2317)] = 1;
t[mp(1764, 2406)] = 1;
t[mp(1771, 2538)] = 1;
t[mp(1776, 2381)] = 1;
t[mp(1779, 2557)] = 1;
t[mp(1780, 2411)] = 1;
t[mp(1781, 2385)] = 1;
t[mp(1784, 2449)] = 1;
t[mp(1789, 2402)] = 1;
t[mp(1790, 2358)] = 1;
t[mp(1792, 2393)] = 1;
t[mp(1794, 2404)] = 1;
t[mp(1797, 2910)] = 1;
t[mp(1798, 2375)] = 1;
t[mp(1801, 3252)] = 1;
t[mp(1804, 2516)] = 1;
t[mp(1805, 2332)] = 1;
t[mp(1807, 2435)] = 1;
t[mp(1808, 2420)] = 1;
t[mp(1810, 2473)] = 1;
t[mp(1814, 2365)] = 1;
t[mp(1816, 3712)] = 1;
t[mp(1817, 2400)] = 1;
t[mp(1818, 2398)] = 1;
t[mp(1827, 2957)] = 1;
t[mp(1828, 2469)] = 1;
t[mp(1830, 2415)] = 1;
t[mp(1834, 2634)] = 1;
t[mp(1835, 2459)] = 1;
t[mp(1840, 2751)] = 1;
t[mp(1841, 2523)] = 1;
t[mp(1844, 2493)] = 1;
t[mp(1849, 2485)] = 1;
t[mp(1852, 2879)] = 1;
t[mp(1856, 2720)] = 1;
t[mp(1857, 2551)] = 1;
t[mp(1858, 2444)] = 1;
t[mp(1861, 3273)] = 1;
t[mp(1862, 2613)] = 1;
t[mp(1865, 2513)] = 1;
t[mp(1868, 3991)] = 1;
t[mp(1871, 2505)] = 1;
t[mp(1873, 2395)] = 1;
t[mp(1875, 2830)] = 1;
t[mp(1876, 2502)] = 1;
t[mp(1881, 2576)] = 1;
t[mp(1886, 2773)] = 1;
t[mp(1890, 2525)] = 1;
t[mp(1891, 2462)] = 1;
t[mp(1893, 2743)] = 1;
t[mp(1894, 2572)] = 1;
t[mp(1896, 2709)] = 1;
t[mp(1897, 2511)] = 1;
t[mp(1899, 2600)] = 1;
t[mp(1900, 2515)] = 1;
t[mp(1903, 2567)] = 1;
t[mp(1908, 4079)] = 1;
t[mp(1909, 2509)] = 1;
t[mp(1911, 2564)] = 1;
t[mp(1913, 2530)] = 1;
t[mp(1916, 2592)] = 1;
t[mp(1917, 2575)] = 1;
t[mp(1921, 2708)] = 1;
t[mp(1925, 2550)] = 1;
t[mp(1926, 2549)] = 1;
t[mp(1927, 2492)] = 1;
t[mp(1931, 4030)] = 1;
t[mp(1932, 2700)] = 1;
t[mp(1933, 2665)] = 1;
t[mp(1934, 2642)] = 1;
t[mp(1937, 2597)] = 1;
t[mp(1938, 2570)] = 1;
t[mp(1940, 2548)] = 1;
t[mp(1944, 2661)] = 1;
t[mp(1951, 2789)] = 1;
t[mp(1952, 2689)] = 1;
t[mp(1955, 2675)] = 1;
t[mp(1956, 2647)] = 1;
t[mp(1958, 2632)] = 1;
t[mp(1959, 2616)] = 1;
t[mp(1961, 2931)] = 1;
t[mp(1963, 2761)] = 1;
t[mp(1968, 2953)] = 1;
t[mp(1969, 2691)] = 1;
t[mp(1974, 2611)] = 1;
t[mp(1977, 2673)] = 1;
t[mp(1980, 2986)] = 1;
t[mp(1983, 2645)] = 1;
t[mp(1985, 2738)] = 1;
t[mp(1988, 2687)] = 1;
t[mp(1989, 2546)] = 1;
t[mp(1991, 2707)] = 1;
t[mp(1996, 2780)] = 1;
t[mp(1999, 2704)] = 1;
t[mp(2006, 3078)] = 1;
t[mp(2009, 2682)] = 1;
t[mp(2013, 2556)] = 1;
t[mp(2015, 2729)] = 1;
t[mp(2016, 2684)] = 1;
t[mp(2020, 2938)] = 1;
t[mp(2021, 2702)] = 1;
t[mp(2023, 2779)] = 1;
t[mp(2025, 2671)] = 1;
t[mp(2028, 3048)] = 1;
t[mp(2035, 4593)] = 1;
t[mp(2038, 2832)] = 1;
t[mp(2039, 2627)] = 1;
t[mp(2044, 3121)] = 1;
t[mp(2045, 2785)] = 1;
t[mp(2047, 2749)] = 1;
t[mp(2048, 2668)] = 1;
t[mp(2053, 4805)] = 1;
t[mp(2055, 2747)] = 1;
t[mp(2058, 2733)] = 1;
t[mp(2061, 3037)] = 1;
t[mp(2062, 2759)] = 1;
t[mp(2064, 2806)] = 1;
t[mp(2066, 2754)] = 1;
t[mp(2069, 2902)] = 1;
t[mp(2072, 2816)] = 1;
t[mp(2074, 2809)] = 1;
t[mp(2079, 2850)] = 1;
t[mp(2082, 3254)] = 1;
t[mp(2083, 3207)] = 1;
t[mp(2084, 2856)] = 1;
t[mp(2087, 2798)] = 1;
t[mp(2090, 2956)] = 1;
t[mp(2091, 2768)] = 1;
t[mp(2092, 2746)] = 1;
t[mp(2102, 2891)] = 1;
t[mp(2109, 3138)] = 1;
t[mp(2110, 2864)] = 1;
t[mp(2111, 2758)] = 1;
t[mp(2113, 2883)] = 1;
t[mp(2114, 2804)] = 1;
t[mp(2118, 4706)] = 1;
t[mp(2119, 2788)] = 1;
t[mp(2121, 2925)] = 1;
t[mp(2122, 2921)] = 1;
t[mp(2124, 2899)] = 1;
t[mp(2125, 2834)] = 1;
t[mp(2126, 2826)] = 1;
t[mp(2128, 2778)] = 1;
t[mp(2131, 3334)] = 1;
t[mp(2139, 2882)] = 1;
t[mp(2144, 3811)] = 1;
t[mp(2147, 2881)] = 1;
t[mp(2150, 3039)] = 1;
t[mp(2151, 2869)] = 1;
t[mp(2154, 2970)] = 1;
t[mp(2155, 2862)] = 1;
t[mp(2157, 4055)] = 1;
t[mp(2158, 2814)] = 1;
t[mp(2160, 2919)] = 1;
t[mp(2165, 2792)] = 1;
t[mp(2167, 2943)] = 1;
t[mp(2170, 2873)] = 1;
t[mp(2172, 3020)] = 1;
t[mp(2173, 2843)] = 1;
t[mp(2178, 2927)] = 1;
t[mp(2179, 2917)] = 1;
t[mp(2186, 3478)] = 1;
t[mp(2187, 2846)] = 1;
t[mp(2189, 2985)] = 1;
t[mp(2197, 3244)] = 1;
t[mp(2200, 2915)] = 1;
t[mp(2207, 3067)] = 1;
t[mp(2208, 3036)] = 1;
t[mp(2211, 3908)] = 1;
t[mp(2212, 2905)] = 1;
t[mp(2214, 3024)] = 1;
t[mp(2219, 2946)] = 1;
t[mp(2221, 3261)] = 1;
t[mp(2226, 3229)] = 1;
t[mp(2227, 3015)] = 1;
t[mp(2228, 2997)] = 1;
t[mp(2232, 3064)] = 1;
t[mp(2233, 2972)] = 1;
t[mp(2236, 2960)] = 1;
t[mp(2241, 3061)] = 1;
t[mp(2242, 3007)] = 1;
t[mp(2244, 2974)] = 1;
t[mp(2248, 3119)] = 1;
t[mp(2249, 3001)] = 1;
t[mp(2251, 3148)] = 1;
t[mp(2252, 3089)] = 1;
t[mp(2253, 3026)] = 1;
t[mp(2258, 3110)] = 1;
t[mp(2259, 3099)] = 1;
t[mp(2260, 2979)] = 1;
t[mp(2263, 3433)] = 1;
t[mp(2265, 2993)] = 1;
t[mp(2267, 3046)] = 1;
t[mp(2270, 3006)] = 1;
t[mp(2273, 3338)] = 1;
t[mp(2274, 3032)] = 1;
t[mp(2275, 3004)] = 1;
t[mp(2279, 3589)] = 1;
t[mp(2280, 3097)] = 1;
t[mp(2285, 3031)] = 1;
t[mp(2290, 3172)] = 1;
t[mp(2292, 3333)] = 1;
t[mp(2295, 3057)] = 1;
t[mp(2300, 3193)] = 1;
t[mp(2301, 3084)] = 1;
t[mp(2304, 3460)] = 1;
t[mp(2305, 3163)] = 1;
t[mp(2306, 3125)] = 1;
t[mp(2308, 3130)] = 1;
t[mp(2312, 3118)] = 1;
t[mp(2314, 3425)] = 1;
t[mp(2316, 3128)] = 1;
t[mp(2320, 3218)] = 1;
t[mp(2321, 3082)] = 1;
t[mp(2324, 3117)] = 1;
t[mp(2326, 3250)] = 1;
t[mp(2328, 3012)] = 1;
t[mp(2331, 3113)] = 1;
t[mp(2334, 3202)] = 1;
t[mp(2340, 3570)] = 1;
t[mp(2343, 3396)] = 1;
t[mp(2344, 3145)] = 1;
t[mp(2349, 3763)] = 1;
t[mp(2352, 3519)] = 1;
t[mp(2353, 3197)] = 1;
t[mp(2354, 3101)] = 1;
t[mp(2360, 3423)] = 1;
t[mp(2361, 3217)] = 1;
t[mp(2364, 4038)] = 1;
t[mp(2371, 3585)] = 1;
t[mp(2372, 3289)] = 1;
t[mp(2373, 3247)] = 1;
t[mp(2374, 3177)] = 1;
t[mp(2378, 3731)] = 1;
t[mp(2379, 3213)] = 1;
t[mp(2380, 3106)] = 1;
t[mp(2383, 3201)] = 1;
t[mp(2384, 3169)] = 1;
t[mp(2387, 3314)] = 1;
t[mp(2392, 3182)] = 1;
t[mp(2397, 3810)] = 1;
t[mp(2408, 3359)] = 1;
t[mp(2409, 3190)] = 1;
t[mp(2413, 3179)] = 1;
t[mp(2417, 3103)] = 1;
t[mp(2419, 3512)] = 1;
t[mp(2423, 3258)] = 1;
t[mp(2425, 4507)] = 1;
t[mp(2429, 3393)] = 1;
t[mp(2431, 3116)] = 1;
t[mp(2433, 3341)] = 1;
t[mp(2434, 3225)] = 1;
t[mp(2441, 3327)] = 1;
t[mp(2442, 3317)] = 1;
t[mp(2443, 3302)] = 1;
t[mp(2446, 3269)] = 1;
t[mp(2448, 4240)] = 1;
t[mp(2451, 3281)] = 1;
t[mp(2452, 3232)] = 1;
t[mp(2457, 3351)] = 1;
t[mp(2461, 3552)] = 1;
t[mp(2465, 3206)] = 1;
t[mp(2467, 3413)] = 1;
t[mp(2472, 3246)] = 1;
t[mp(2475, 3299)] = 1;
t[mp(2477, 3864)] = 1;
t[mp(2478, 3598)] = 1;
t[mp(2479, 3287)] = 1;
t[mp(2481, 3500)] = 1;
t[mp(2482, 3345)] = 1;
t[mp(2484, 3286)] = 1;
t[mp(2487, 3498)] = 1;
t[mp(2488, 3297)] = 1;
t[mp(2489, 3294)] = 1;
t[mp(2497, 4154)] = 1;
t[mp(2498, 3495)] = 1;
t[mp(2499, 3325)] = 1;
t[mp(2501, 3384)] = 1;
t[mp(2504, 3941)] = 1;
t[mp(2507, 3358)] = 1;
t[mp(2508, 3355)] = 1;
t[mp(2518, 3441)] = 1;
t[mp(2519, 3381)] = 1;
t[mp(2520, 3374)] = 1;
t[mp(2521, 3350)] = 1;
t[mp(2527, 3471)] = 1;
t[mp(2529, 3368)] = 1;
t[mp(2532, 3412)] = 1;
t[mp(2533, 3379)] = 1;
t[mp(2535, 3534)] = 1;
t[mp(2537, 3323)] = 1;
t[mp(2540, 3838)] = 1;
t[mp(2541, 3693)] = 1;
t[mp(2542, 3544)] = 1;
t[mp(2543, 3488)] = 1;
t[mp(2544, 3405)] = 1;
t[mp(2553, 3924)] = 1;
t[mp(2554, 3395)] = 1;
t[mp(2555, 3391)] = 1;
t[mp(2559, 3592)] = 1;
t[mp(2560, 3538)] = 1;
t[mp(2561, 3241)] = 1;
t[mp(2563, 3510)] = 1;
t[mp(2566, 3502)] = 1;
t[mp(2569, 3422)] = 1;
t[mp(2574, 3699)] = 1;
t[mp(2578, 3536)] = 1;
t[mp(2579, 3467)] = 1;
t[mp(2580, 3459)] = 1;
t[mp(2581, 3454)] = 1;
t[mp(2582, 3377)] = 1;
t[mp(2584, 3684)] = 1;
t[mp(2585, 3475)] = 1;
t[mp(2586, 3343)] = 1;
t[mp(2587, 3312)] = 1;
t[mp(2590, 3722)] = 1;
t[mp(2594, 3409)] = 1;
t[mp(2595, 3372)] = 1;
t[mp(2599, 3466)] = 1;
t[mp(2602, 3558)] = 1;
t[mp(2606, 3518)] = 1;
t[mp(2609, 3464)] = 1;
t[mp(2615, 4125)] = 1;
t[mp(2618, 3628)] = 1;
t[mp(2619, 3605)] = 1;
t[mp(2620, 3601)] = 1;
t[mp(2621, 3525)] = 1;
t[mp(2625, 3739)] = 1;
t[mp(2626, 3418)] = 1;
t[mp(2629, 3578)] = 1;
t[mp(2630, 3508)] = 1;
t[mp(2636, 3667)] = 1;
t[mp(2637, 3480)] = 1;
t[mp(2638, 3463)] = 1;
t[mp(2644, 3621)] = 1;
t[mp(2649, 4089)] = 1;
t[mp(2650, 3671)] = 1;
t[mp(2651, 3547)] = 1;
t[mp(2652, 3449)] = 1;
t[mp(2654, 3367)] = 1;
t[mp(2656, 3584)] = 1;
t[mp(2659, 3569)] = 1;
t[mp(2663, 4619)] = 1;
t[mp(2664, 3506)] = 1;
t[mp(2667, 3772)] = 1;
t[mp(2677, 3748)] = 1;
t[mp(2678, 3720)] = 1;
t[mp(2679, 3658)] = 1;
t[mp(2680, 3529)] = 1;
t[mp(2693, 4018)] = 1;
t[mp(2694, 3614)] = 1;
t[mp(2696, 3565)] = 1;
t[mp(2698, 3844)] = 1;
t[mp(2699, 3638)] = 1;
t[mp(2706, 3640)] = 1;
t[mp(2711, 3977)] = 1;
t[mp(2712, 3619)] = 1;
t[mp(2714, 4162)] = 1;
t[mp(2715, 3665)] = 1;
t[mp(2717, 3643)] = 1;
t[mp(2718, 3549)] = 1;
t[mp(2722, 4815)] = 1;
t[mp(2723, 3600)] = 1;
t[mp(2725, 4479)] = 1;
t[mp(2726, 3635)] = 1;
t[mp(2728, 3814)] = 1;
t[mp(2731, 3852)] = 1;
t[mp(2732, 3727)] = 1;
t[mp(2735, 3759)] = 1;
t[mp(2736, 3689)] = 1;
t[mp(2737, 3651)] = 1;
t[mp(2740, 3832)] = 1;
t[mp(2741, 3676)] = 1;
t[mp(2742, 3647)] = 1;
t[mp(2745, 3898)] = 1;
t[mp(2753, 3917)] = 1;
t[mp(2756, 3719)] = 1;
t[mp(2757, 3673)] = 1;
t[mp(2763, 4052)] = 1;
t[mp(2765, 3698)] = 1;
t[mp(2767, 3825)] = 1;
t[mp(2770, 3974)] = 1;
t[mp(2771, 3709)] = 1;
t[mp(2775, 3705)] = 1;
t[mp(2777, 4012)] = 1;
t[mp(2782, 3681)] = 1;
t[mp(2784, 3890)] = 1;
t[mp(2787, 4608)] = 1;
t[mp(2791, 3656)] = 1;
t[mp(2794, 3862)] = 1;
t[mp(2795, 3714)] = 1;
t[mp(2797, 3957)] = 1;
t[mp(2800, 3762)] = 1;
t[mp(2801, 3733)] = 1;
t[mp(2802, 3704)] = 1;
t[mp(2808, 3769)] = 1;
t[mp(2812, 3848)] = 1;
t[mp(2813, 3787)] = 1;
t[mp(2818, 3743)] = 1;
t[mp(2820, 3854)] = 1;
t[mp(2823, 3771)] = 1;
t[mp(2825, 3756)] = 1;
t[mp(2828, 4075)] = 1;
t[mp(2829, 3724)] = 1;
t[mp(2838, 3999)] = 1;
t[mp(2839, 3793)] = 1;
t[mp(2842, 4745)] = 1;
t[mp(2845, 3888)] = 1;
t[mp(2848, 3932)] = 1;
t[mp(2849, 3886)] = 1;
t[mp(2852, 4550)] = 1;
t[mp(2853, 3824)] = 1;
t[mp(2855, 3777)] = 1;
t[mp(2858, 3955)] = 1;
t[mp(2859, 3882)] = 1;
t[mp(2860, 3781)] = 1;
t[mp(2861, 3776)] = 1;
t[mp(2866, 3809)] = 1;
t[mp(2867, 3737)] = 1;
t[mp(2871, 4390)] = 1;
t[mp(2872, 4186)] = 1;
t[mp(2875, 3907)] = 1;
t[mp(2876, 3767)] = 1;
t[mp(2878, 4044)] = 1;
t[mp(2886, 3900)] = 1;
t[mp(2889, 3880)] = 1;
t[mp(2893, 4011)] = 1;
t[mp(2895, 3835)] = 1;
t[mp(2897, 4782)] = 1;
t[mp(2898, 3801)] = 1;
t[mp(2901, 3995)] = 1;
t[mp(2904, 4336)] = 1;
t[mp(2907, 3935)] = 1;
t[mp(2909, 3822)] = 1;
t[mp(2912, 3916)] = 1;
t[mp(2914, 3971)] = 1;
t[mp(2923, 4197)] = 1;
t[mp(2924, 4109)] = 1;
t[mp(2929, 3927)] = 1;
t[mp(2930, 3872)] = 1;
t[mp(2933, 4192)] = 1;
t[mp(2934, 4135)] = 1;
t[mp(2936, 3923)] = 1;
t[mp(2940, 3841)] = 1;
t[mp(2941, 3798)] = 1;
t[mp(2945, 4152)] = 1;
t[mp(2948, 3948)] = 1;
t[mp(2950, 3944)] = 1;
t[mp(2952, 4027)] = 1;
t[mp(2959, 4138)] = 1;
t[mp(2962, 4199)] = 1;
t[mp(2963, 4160)] = 1;
t[mp(2964, 3921)] = 1;
t[mp(2966, 4082)] = 1;
t[mp(2967, 3896)] = 1;
t[mp(2968, 3795)] = 1;
t[mp(2976, 4151)] = 1;
t[mp(2977, 3982)] = 1;
t[mp(2978, 3966)] = 1;
t[mp(2983, 3998)] = 1;
t[mp(2988, 4779)] = 1;
t[mp(2989, 4231)] = 1;
t[mp(2990, 4121)] = 1;
t[mp(2991, 4081)] = 1;
t[mp(2995, 4074)] = 1;
t[mp(2996, 3965)] = 1;
t[mp(2999, 4363)] = 1;
t[mp(3000, 4060)] = 1;
t[mp(3003, 4302)] = 1;
t[mp(3009, 4237)] = 1;
t[mp(3010, 4017)] = 1;
t[mp(3011, 3952)] = 1;
t[mp(3014, 4443)] = 1;
t[mp(3017, 4010)] = 1;
t[mp(3019, 4037)] = 1;
t[mp(3023, 4103)] = 1;
t[mp(3028, 4176)] = 1;
t[mp(3029, 4141)] = 1;
t[mp(3030, 3914)] = 1;
t[mp(3034, 4107)] = 1;
t[mp(3035, 4070)] = 1;
t[mp(3041, 4111)] = 1;
t[mp(3043, 4051)] = 1;
t[mp(3045, 4128)] = 1;
t[mp(3050, 4249)] = 1;
t[mp(3051, 4016)] = 1;
t[mp(3053, 4097)] = 1;
t[mp(3055, 3961)] = 1;
t[mp(3059, 4700)] = 1;
t[mp(3060, 4049)] = 1;
t[mp(3063, 4330)] = 1;
t[mp(3066, 3877)] = 1;
t[mp(3069, 4278)] = 1;
t[mp(3072, 4150)] = 1;
t[mp(3074, 4057)] = 1;
t[mp(3076, 3821)] = 1;
t[mp(3080, 4263)] = 1;
t[mp(3081, 4033)] = 1;
t[mp(3086, 4140)] = 1;
t[mp(3087, 4100)] = 1;
t[mp(3091, 4447)] = 1;
t[mp(3092, 4234)] = 1;
t[mp(3093, 4219)] = 1;
t[mp(3094, 4120)] = 1;
t[mp(3096, 4223)] = 1;
t[mp(3105, 4324)] = 1;
t[mp(3108, 4449)] = 1;
t[mp(3112, 4503)] = 1;
t[mp(3115, 4222)] = 1;
t[mp(3123, 4119)] = 1;
t[mp(3127, 4173)] = 1;
t[mp(3132, 4429)] = 1;
t[mp(3133, 4184)] = 1;
t[mp(3136, 4195)] = 1;
t[mp(3137, 4146)] = 1;
t[mp(3140, 4262)] = 1;
t[mp(3143, 4210)] = 1;
t[mp(3147, 4209)] = 1;
t[mp(3150, 4026)] = 1;
t[mp(3152, 4253)] = 1;
t[mp(3153, 4169)] = 1;
t[mp(3158, 4243)] = 1;
t[mp(3162, 4272)] = 1;
t[mp(3165, 4182)] = 1;
t[mp(3167, 4563)] = 1;
t[mp(3168, 4361)] = 1;
t[mp(3171, 4543)] = 1;
t[mp(3174, 4683)] = 1;
t[mp(3175, 4271)] = 1;
t[mp(3181, 4300)] = 1;
t[mp(3184, 4395)] = 1;
t[mp(3187, 4068)] = 1;
t[mp(3189, 4291)] = 1;
t[mp(3192, 4296)] = 1;
t[mp(3195, 4247)] = 1;
t[mp(3199, 4348)] = 1;
t[mp(3204, 4307)] = 1;
t[mp(3209, 4338)] = 1;
t[mp(3211, 4261)] = 1;
t[mp(3212, 4172)] = 1;
t[mp(3215, 4314)] = 1;
t[mp(3216, 4277)] = 1;
t[mp(3220, 4343)] = 1;
t[mp(3221, 4319)] = 1;
t[mp(3223, 4992)] = 1;
t[mp(3224, 4506)] = 1;
t[mp(3227, 4495)] = 1;
t[mp(3228, 4446)] = 1;
t[mp(3231, 4425)] = 1;
t[mp(3234, 4373)] = 1;
t[mp(3237, 4375)] = 1;
t[mp(3239, 4305)] = 1;
t[mp(3243, 4528)] = 1;
t[mp(3249, 4454)] = 1;
t[mp(3256, 4471)] = 1;
t[mp(3257, 4345)] = 1;
t[mp(3260, 4610)] = 1;
t[mp(3264, 4581)] = 1;
t[mp(3265, 4290)] = 1;
t[mp(3268, 4547)] = 1;
t[mp(3271, 4549)] = 1;
t[mp(3272, 4310)] = 1;
t[mp(3275, 4356)] = 1;
t[mp(3277, 4539)] = 1;
t[mp(3278, 4270)] = 1;
t[mp(3280, 4165)] = 1;
t[mp(3283, 4526)] = 1;
t[mp(3285, 4341)] = 1;
t[mp(3291, 4493)] = 1;
t[mp(3293, 4473)] = 1;
t[mp(3296, 4546)] = 1;
t[mp(3301, 4678)] = 1;
t[mp(3306, 4453)] = 1;
t[mp(3308, 4452)] = 1;
t[mp(3309, 4442)] = 1;
t[mp(3310, 4384)] = 1;
t[mp(3316, 4466)] = 1;
t[mp(3320, 4288)] = 1;
t[mp(3322, 4511)] = 1;
t[mp(3329, 4416)] = 1;
t[mp(3331, 4298)] = 1;
t[mp(3337, 4317)] = 1;
t[mp(3347, 4663)] = 1;
t[mp(3348, 4635)] = 1;
t[mp(3349, 4523)] = 1;
t[mp(3354, 4744)] = 1;
t[mp(3357, 4519)] = 1;
t[mp(3361, 4383)] = 1;
t[mp(3364, 4522)] = 1;
t[mp(3366, 4525)] = 1;
t[mp(3370, 4650)] = 1;
t[mp(3371, 4552)] = 1;
t[mp(3383, 4438)] = 1;
t[mp(3387, 4399)] = 1;
t[mp(3389, 4914)] = 1;
t[mp(3390, 4622)] = 1;
t[mp(3398, 4532)] = 1;
t[mp(3399, 4468)] = 1;
t[mp(3400, 4372)] = 1;
t[mp(3402, 4559)] = 1;
t[mp(3404, 4434)] = 1;
t[mp(3407, 4489)] = 1;
t[mp(3411, 4579)] = 1;
t[mp(3415, 4810)] = 1;
t[mp(3417, 4725)] = 1;
t[mp(3421, 4631)] = 1;
t[mp(3427, 4897)] = 1;
t[mp(3428, 4691)] = 1;
t[mp(3429, 4605)] = 1;
t[mp(3430, 4478)] = 1;
t[mp(3432, 4398)] = 1;
t[mp(3435, 4690)] = 1;
t[mp(3436, 4601)] = 1;
t[mp(3438, 4487)] = 1;
t[mp(3440, 4712)] = 1;
t[mp(3443, 4571)] = 1;
t[mp(3446, 4675)] = 1;
t[mp(3447, 4670)] = 1;
t[mp(3448, 4599)] = 1;
t[mp(3452, 4567)] = 1;
t[mp(3453, 4437)] = 1;
t[mp(3457, 4803)] = 1;
t[mp(3458, 4595)] = 1;
t[mp(3462, 4945)] = 1;
t[mp(3469, 4578)] = 1;
t[mp(3473, 4892)] = 1;
t[mp(3474, 4856)] = 1;
t[mp(3477, 4708)] = 1;
t[mp(3482, 4660)] = 1;
t[mp(3483, 4628)] = 1;
t[mp(3485, 4733)] = 1;
t[mp(3486, 4621)] = 1;
t[mp(3490, 4882)] = 1;
t[mp(3491, 4717)] = 1;
t[mp(3492, 4674)] = 1;
t[mp(3494, 4809)] = 1;
t[mp(3497, 4681)] = 1;
t[mp(3505, 4847)] = 1;
t[mp(3514, 4836)] = 1;
t[mp(3515, 4742)] = 1;
t[mp(3517, 4751)] = 1;
t[mp(3521, 4657)] = 1;
t[mp(3524, 4763)] = 1;
t[mp(3527, 4876)] = 1;
t[mp(3528, 4761)] = 1;
t[mp(3531, 4969)] = 1;
t[mp(3532, 4722)] = 1;
t[mp(3540, 4789)] = 1;
t[mp(3542, 4181)] = 1;
t[mp(3551, 4773)] = 1;
t[mp(3555, 4850)] = 1;
t[mp(3557, 4832)] = 1;
t[mp(3562, 4705)] = 1;
t[mp(3567, 4941)] = 1;
t[mp(3568, 4644)] = 1;
t[mp(3574, 4786)] = 1;
t[mp(3576, 4921)] = 1;
t[mp(3577, 4740)] = 1;
t[mp(3580, 4768)] = 1;
t[mp(3582, 4979)] = 1;
t[mp(3583, 4778)] = 1;
t[mp(3588, 4967)] = 1;
t[mp(3591, 4928)] = 1;
t[mp(3594, 4818)] = 1;
t[mp(3595, 4772)] = 1;
t[mp(3596, 4586)] = 1;
t[mp(3603, 4839)] = 1;
t[mp(3607, 4428)] = 1;
t[mp(3609, 4801)] = 1;
t[mp(3612, 4889)] = 1;
t[mp(3613, 4652)] = 1;
t[mp(3616, 4939)] = 1;
t[mp(3617, 4871)] = 1;
t[mp(3623, 4821)] = 1;
t[mp(3625, 4765)] = 1;
t[mp(3631, 4935)] = 1;
t[mp(3633, 4926)] = 1;
t[mp(3634, 4807)] = 1;
t[mp(3637, 4845)] = 1;
t[mp(3642, 4977)] = 1;
t[mp(3645, 4814)] = 1;
t[mp(3654, 4959)] = 1;
t[mp(3655, 4907)] = 1;
t[mp(3661, 4972)] = 1;
t[mp(3662, 4878)] = 1;
t[mp(3663, 4771)] = 1;
t[mp(3669, 4865)] = 1;
t[mp(3675, 4888)] = 1;
t[mp(3680, 4956)] = 1;
t[mp(3686, 4775)] = 1;
t[mp(3692, 4948)] = 1;
t[mp(3717, 4903)] = 1;
t[mp(3726, 4932)] = 1;
t[mp(3742, 5000)] = 1;
t[mp(3750, 4732)] = 1;
t[mp(3753, 4953)] = 1;

}
bool canWin(int a, int b) {
	if(t.count(mp(a, b)) || t.count(mp(b, a))) {
		return false;
	}
	return 1;
}

int main() {
	addCase();
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(canWin(a, b)) {
			cout << "Alice" << endl;
		}
		else {
			cout << "Bob" << endl;
		}
	}
}
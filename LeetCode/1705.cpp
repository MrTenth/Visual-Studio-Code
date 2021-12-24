#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int nowday = 0, appleday = 0, cnt = 0;
        priority_queue <pair <int, int>> que;
        while(appleday < apples.size()) {
            // while(appleday < apples.size() && (apples[appleday] == 0 || nowday >= appleday + days[appleday])) {
            //     appleday++;
            // }
            // if(appleday == apples.size()) {
            //     break;
            // }
            // cnt++, apples[appleday]--, nowday++;
            que.push({ appleday + days[appleday], apples[appleday] });
            while(!que.empty() && (que.top().first <= nowday || que.top().second == 0)) {
                que.pop();
            }
            if(!que.empty()) {
                pair <int, int> t = que.top();
                t.second--;
                cout << t.first << '@';
                cnt++, que.pop(), que.push(t);
            }
            nowday++, appleday++;
        }
        while(!que.empty()) {
            while(!que.empty() && (que.top().first <= nowday || que.top().second == 0)) {
                que.pop();
            }
            if(que.empty()) {
                break;
            }
            if(!que.empty()) {
                pair <int, int> t = que.top();
                t.second--;
                cout << t.first << '&';
                cnt++, que.pop(), que.push(t);
            }
            nowday++;
        }
        return cnt;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> apples = stringToIntegerVector(line);
        getline(cin, line);
        vector<int> days = stringToIntegerVector(line);
        
        int ret = Solution().eatenApples(apples, days);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
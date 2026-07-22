#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> d;
        queue<int> r;
        int i =0 ;
        // đưa index vào 2 queue 
        while(i < (int)senate.size()){
            if(senate[i] == 'D')
                d.push(i);
            else if (senate[i] == 'R') 
                r.push(i);
            i++;
        }
        while(!d.empty() && !r.empty()){ // 1 thằng rõng là dừng 
            
            if(d.front() < r.front()){
                r.pop() ; // r lớn hơn -> đi sau -> xóa r 
                d.push(d.front() + senate.size()  ); // d thắng -> đưa xuống cuối hàng để chơi tiếp 
                d.pop() ;
            }
            else if (d.front() > r.front()){
                d.pop() ; // d lớn hơn -> đi sau -> xóa d 
                r.push(r.front() + senate.size()  ); // r thắng -> đưa xuống cuối hàng để chơi tiếp 
                r.pop() ;
            }
        }
        // if(d.empty()) return "Radiant";
        // else if(r.empty()) return "Dire";
        return d.empty() ? "Radiant" : "Dire";

    }
};

int main(){

    string a = "DRDRDRDRDRDRDRRRDDDRRRDDRDRDRDRDRDRDRDRRRDDDRRRDDRDRRRDRDRDRRDDRDDRRDDRDRDRDRDRDRDRRRDDDRRRDDRDRRRDRDRDRRDDRDDRRDDRRRDRDRDRRDDRDDRRD";
    Solution sol;
    string result = sol.predictPartyVictory(a);
    cout << result;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
    public:
        bool backspaceCompare(string s, string t) {
            string ss = "" , tt = "" ;
            for (auto x : s) {
                if (x == '#') {
                    if (!ss.empty()) ss.pop_back();
                } else ss.push_back(x);
            }
            for (auto xx : t) {
                if (xx == '#') {
                    if (!tt.empty()) tt.pop_back();
                } else tt.push_back(xx);
            }
            return ss == tt;
        }
};

int main(){     
        
    
    return 0 ;
}







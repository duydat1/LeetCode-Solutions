#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
    public:
        int minAddToMakeValid(string s) {
            int ans = 0 ; 
            int cnt = 0 ;
            for(char c:s){
                if (c == '(') cnt++ ; 
                else if(c == ')'){
                    if(cnt == 0) ans++;
                    else cnt--;
                }
            }
            return ans + cnt ; 
        }
};

int main(){     
        
    Solution sol ; 
    string s = "())";
    cout << sol.minAddToMakeValid(s);
    return 0 ;
}







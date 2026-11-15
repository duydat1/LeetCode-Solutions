#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    int calculate(string s) {
        int n = s.size() ;
        int curr_num = 0 ; 
        stack<int> num ; 
        char dau = '+';

        for(int i=0 ; i<n ; i++){
            if(isdigit(s[i])){
                curr_num = curr_num *10 + (s[i]-'0');
            }
            if((!isdigit(s[i]) && s[i] != ' ' ) || i == n-1){
                if(dau == '+') num.push(curr_num);
                else if(dau == '-') num.push(-curr_num);
                else if(dau == '*'){
                    int temp = num.top();
                    num.pop();
                    num.push(temp*curr_num);
                }
                else if(dau == '/'){
                    int temp = num.top();
                    num.pop();
                    num.push(temp/curr_num);
                }
                dau = s[i];
                curr_num = 0 ;
            }
        }

        if(num.empty()) return curr_num ;  
        curr_num = 0 ;
        while(!num.empty()){
            curr_num += num.top() ; 
            num.pop();
        }
        return curr_num ; 
    }
};

int main(){     
        
    Solution sol ; 
    cout << sol.calculate("3/2");
    return 0 ;
}







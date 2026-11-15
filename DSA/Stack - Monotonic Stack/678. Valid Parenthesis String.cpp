#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        stack<int> left_par ; 
        stack<int> dau_sao ;
        for(int i=0 ; i<n ; i++){
            if(s[i] == '(') left_par.push(i) ; 
            else if(s[i] == '*') dau_sao.push(i) ; 
            else if(s[i] == ')'){
                if(!left_par.empty()) left_par.pop();
                else if(!dau_sao.empty()) dau_sao.pop();
                else return false ; 
            }
        }
        
        while(!left_par.empty() && !dau_sao.empty()){
            if(left_par.top() > dau_sao.top()) return false ;
            else{
                dau_sao.pop() ; 
                left_par.pop();
            }
        }
        return left_par.empty(); 
    }
};

int main(){     
        
    string s = "(((((*(()((((*((**(((()()*)()()()*((((**)())*)*)))))))(())(()))())((*()()(((()((()*(())*(()**)()(())";
    Solution sol; 
    cout << sol.checkValidString(s);
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//HARDCODE

class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0 ; 
        int n = s.size();
        stack<int> st ; 
        if(s.size() == 0) return 0 ; 

        for(int i=0 ; i<n ; i++){
            if(!st.empty()){
                if(s[i] == ')' && s[st.top()] == '('){
                    st.pop() ; 
                    continue ; 
                }
            }
            st.push(i);
        }
        if(st.empty()) return n ; 
        while(!st.empty()){
            ans = max(ans , n-st.top()-1);
            n = st.top() ; 
            st.pop() ; 
        }
        ans = max(ans , n-0);
        return ans ; 
    }
};

int main(){     
        
    Solution sol ; 
    cout << sol.longestValidParentheses(")(()(()(((())(((((()()))((((()()(()()())())())()))()()()())(())()()(((()))))()((()))(((())()((()()())((())))(())))())((()())()()((()((())))))((()(((((()((()))(()()(())))((()))()))())");
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st ;

        for(const string& token : tokens){
            if(token == "+" || token == "-" || token == "*" || token =="/"){
                int b = st.top() ; st.pop() ; 
                int a = st.top() ; st.pop() ; 

                if(token == "+") st.push(a+b);
                if(token == "-") st.push(a-b);
                if(token == "*") st.push(a*b);
                if(token == "/") st.push(a/b);
            }
            else st.push(stoi(token));
        }
        return st.top() ; 
    }
};

int main(){     
        
    
    return 0 ;
}







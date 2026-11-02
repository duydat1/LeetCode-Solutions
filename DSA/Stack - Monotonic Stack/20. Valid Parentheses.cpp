#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        unordered_map<char, char> b = { {')', '('} , {']', '['} , {'}', '{'} };

        for(char c : s){
            if(b.count(c)){
                if(st.empty() || st.top() != b[c]) return false ; 
                st.pop();
            }
            else st.push(c);
        }
        return st.empty();
    }        
};

int main(){     
        
    Solution sol ; 
    string s = "(({}))";
    cout<< sol.isValid(s);
    return 0 ;
}







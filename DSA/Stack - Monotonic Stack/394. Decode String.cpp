#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    string decodeString(string s) {
        stack<pair<int , string>> st;
        int curr_num = 0 ; 
        string ans = "" ; 
        
        for(char c : s){
            if(isdigit(c)){
                curr_num = curr_num * 10 +(c-'0'); // Nếu số có hơn 1 chữ số 
            }
            else if(c == '['){
                st.push({curr_num , ans});
                curr_num = 0 ; 
                ans = "" ; 
            }
            else if(c == ']'){
                auto [k,temp] = st.top() ; st.pop() ; 
                temp.reserve(ans.length() * k) ; 
                while(k--) temp += ans ; 
                ans = temp; 
            }
            else ans += c ; 
        }
        return ans ; 
    }
};



int main(){     
        
    
    return 0 ;
}







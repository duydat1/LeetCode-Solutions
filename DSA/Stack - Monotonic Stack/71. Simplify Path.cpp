#include<bits/stdc++.h>
using namespace std;

//MEDIUM 

class Solution {
public:
    string simplifyPath(string path) {
        vector <string> st ; 
        string a ; 
        stringstream ss (path); 
        while(getline(ss ,a, '/')){
            if(a == "" ||a ==  ".") continue ;
            if(a == ".." ) {
                if(!st.empty())
                    st.pop_back() ; 
            }
            else st.push_back(a);
        }
        string ans ; 
        for(auto c : st ){
            ans += "/";
            ans += c ; 
        }
        return ans.empty() ? "/" : ans ; 
    }
};

int main(){     
        
    
    return 0 ;
}







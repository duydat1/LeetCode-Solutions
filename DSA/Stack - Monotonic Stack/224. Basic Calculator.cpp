#include<bits/stdc++.h>
using namespace std;

//HARD

class Solution {
public:
    int calculate(string s) {
        long long  num = 0 ; 
        long long  ans = 0 ;
        int sign = 1 ; // Dấu + or -
        stack<int> st ; // Stack dùng để lưu num và sign trước khi tính phép tính trong ngoặc 

        for (char c:s){
            if(isdigit(c)){
                num = num *10 +(c-'0');
            }

            if(!isdigit(c) && c != ' '){
                if(c == '('){
                    st.push(ans);
                    st.push(sign);
                    ans = 0 ; 
                    sign = 1 ; 
                }   
                else if(c == ')'){
                    ans += num*sign;
                    ans *= st.top() ; st.pop() ; // Nhân với dấu ở trước ngoặc mở 
                    ans += st.top() ; st.pop() ; // Cộng với giá trị ở phía trước khi mở ngoặc 
                    num = 0 ; 
                }
                else{
                    ans += num*sign ; 
                    sign = (c == '+') ? 1 : -1 ;
                    num = 0 ; 
                }
            }
        }
        return s.back() == ')' ? ans : ans + num*sign ; 
    }
};

int main(){     
        
    Solution sol ; 
    cout << sol.calculate("-2147483648");
    return 0 ;
}







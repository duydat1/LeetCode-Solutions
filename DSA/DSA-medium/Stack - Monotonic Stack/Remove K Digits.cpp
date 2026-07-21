#include<bits/stdc++.h>
using namespace std;
// speed 0 ms , đừng có đụng vào -_-
class Solution {
public:
    string removeKdigits(string num, int k) { // dùng string thay stack luôn ;))) (có các hàm i hệt )
        string st = "";
        int n = num.length();
        if(k==n) return "0" ; // end luôn 
        // quét r duyệt vào 1 string st thay vì stack , cách dùng như nhau , cứ nghĩ giống string oop nên ko học , h mới bt ;))
        for(char c : num){ // con trỏ c chạy hết num 
            while(!st.empty() && k>0 && st.back() > c){
                st.pop_back();
                k--;
            }
            if(!st.empty() || c != '0')
                st.push_back(c);
        }
        // có thể k chưa = 0 , resize() luôn 
        if(k>0 && k >= (int)st.size()) return "0";
        st.resize(st.size() - k); // - đi k phần tử cuối , chả cần if ;))
        if(st.empty()) return "0" ; // st trống
        return st;
    }
};

int main () {
    string s = "10002";
    int k =4;
    Solution sol;
    string result = sol.removeKdigits(s , k);
    cout << result << endl ;
    return 0;
}
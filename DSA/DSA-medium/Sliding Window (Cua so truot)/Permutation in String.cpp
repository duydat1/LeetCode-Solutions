#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        // kiểm full bảng ASCII luôn mới chịu nhe 
        vector<int> count_s1(256, 0);
        vector<int> count_window_s2(256, 0);
        // vòng lặp đếm 
        for (char c : s1) 
            count_s1[(unsigned char) c ]++; // đổi hết thành số , lần đầu dùng luôn ấy :))) , nhanh hơn dùng map
            // nếu mà trùng nhau thì tự động ++ (tăng thêm 1) , quá mạnh 
        
        int l =0 , n_s1 = s1.length() , n_s2 = s2.length();
        // // nhét 1 lượng phần tử của s2 = s1.length() vào vector r mới có thể thực hiện thêm+xóa ở đoạn sau 
        // for(int i=0 ; i<s1.length() ; i++){
        //     count_window_s2.push_back(s2[i]);
        // }
        // // = s1 luôn thì true luôn , quá ngon
        // if(count_s1 == count_window_s2) return true;
        // chả cần 2 for , duyệt qua 1 for là đc r -_- , thế mà lúc đầu ko nghĩ ra 
        for(int i=0 ; i<n_s2 ; i++){
            count_window_s2[(unsigned char) s2[i] ]++; // s2[i] là đang quét qua từng phần tử trong string s2 nha , đừng có nhớ nhầm -_- .
            
            if(i-l+1 >n_s1){
                count_window_s2[(unsigned char) s2[l] ]--; // tự động trừ bớt 1 phần tử bên trái đi 
                l++;// 
            }
            if(count_s1 == count_window_s2) 
                return true;
        }
        return false;
    }
};




int main(){
    string s1 , s2 ;
    cout << "Nhap s1: " ; getline(cin,s1); 
    cout << "Nhao s2: " ; getline(cin,s2);
    Solution sol ;
    bool result = sol.checkInclusion(s1,s2);
    cout << result;
    
    return 0;
}
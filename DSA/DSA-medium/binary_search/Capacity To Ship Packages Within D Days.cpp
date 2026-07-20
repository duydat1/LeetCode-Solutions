#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0 ; int r = (int)weights.size() - 1 ;
        int w_max = 0;
        int w_sum = 0;
        int ans = 0 ;
        while(l<=r){
            w_max = max(w_max , weights[l]);
            w_sum += weights[l] ;
            l++;
        } // tách thành 2 while cho dễ dùng , dù sao cũng chỉ có O(logN) 
        ans = w_sum ; // 1 ngày là đủ r , đề l
        
        while(w_max <= w_sum){
            // chọn mid làm khối lượng có thể chở hiện tại 
            l = 0 ; int temp_days = days -1 ; 
            int sum = weights[0]; 
            int mid = w_max + (w_sum - w_max)/2; // mid = 1 nửa tổng của khối lượng min + max , 
            while(l < r){
                l++; // cứ tăng lên thôi , < hay > hay = thì đều tăng 
                sum += weights[l]; // tăng sum 
                // khi kết thức là bt ngay có bị vượt quá ngày hay ko .
                if(sum > mid){ // nếu mà để = mid thì logic phải dịch l+1 , để > thui đỡ phải dịch , nó tự cộng quá thì l đúng luôn
                    sum = weights[l] ; // quá khối lượng của mid , reset sum để tính nốt các phần tử còn lại 
                    --temp_days; // - 1 ngày để tí so sánh với 0 
                }
                
            }
            if(temp_days >= 0 ){ // đẹp r , check xem có thể rút bớt khối lượng đc nữa ko 
                ans = mid ; // lưu cái cho chắc -_-
                w_sum = mid -1; // dùng w_sum làm con trỏ đuôi luôn 
            }
            else if (temp_days < 0){ // trọng lượng mid ko đủ , phải tăng thêm 
                w_max = mid + 1 ; // dùng w_max làm con trỏ đầu luôn 
            } // 2 if chạy cùng lúc thì while tự break , chạy thêm đoạn dưới cũng chả có tác dụng j 
        }
        return ans;
    }
};


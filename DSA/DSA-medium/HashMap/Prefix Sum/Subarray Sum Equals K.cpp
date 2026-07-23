#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m; // key = prefix sum , value = số lần xuất hiện 
        m[0] = 1; // gắn =1 để khi sum-k=0 thì +1 vì đúng mà  
        int sum = 0 ;
        int ans = 0;
        for(int num : nums){
            sum+= num;
            if(m.find(sum-k) != m.end())// tìm kiếm tổng vì k cũng là 1 tổng(không phải index) , sum phải >= k mới chạy đc điều kiện này 
                ans += m[sum-k]; // tìm thấy , ans + value của [sum-k]  
            m[sum]++; // thấy r thì tăng như kiểu đẩy con trỏ left++ để tìm kiếm tiếp 
        }
        return ans;
    }
};

int main(){

    vector<int> v ={1,1,1};
    Solution sol ;
    int result = sol.subarraySum(v,2);
    cout << result << endl;
    return 0;
}
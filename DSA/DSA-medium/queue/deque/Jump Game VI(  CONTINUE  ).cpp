#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = (int)nums.size();
        vector<int> v(n); // de chỉ để lưu chỉ số , còn v mới dùng lưu tổng 
        deque<int> de ;
        v[0] = nums[0]; 
        de.push_back(0);
        for(int i=1 ; i<n ; i++){
            if (!de.empty() && de.front() < i-k)
                de.pop_front();// xóa index đầu tiên đi vì đã nằm ngoài khoảng k , ko cần dùng nữa 
            v[i] = v[de.front()] + nums[i]; // cổng tổng kết quả của lần trc với lần này 
            while (!de.empty() && v[de.back()] <= v[i])
                de.pop_back();
            
            de.push_back(i); 
        }
        return v[n-1]; // trả về giá trị cuối cùng 
        
    }
};

int main() {
    vector<int> v = {1,-1,-2,4,-7,3};
    int k = 2 ;
    Solution sol;
    int result = sol.maxResult(v,k);
    cout << result << endl;


    return 0;
}
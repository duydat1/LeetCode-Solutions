#include<bits/stdc++.h>
using namespace std;

// EASY , not MEDIUM
class NumArray {
    vector<int> ans;
public:

    NumArray(vector<int>& nums) {
        int n = nums.size();
        ans.resize(n+1 , 0); // thay đổi bộ nhớ của ans , các số mới gắn = 0 
        for(int i=0 ; i<n ; i++)
            ans[i+1] = ans[i] + nums[i]; // prefix sum 
    }// vậy là trong ans đang lưu tổng cộng dồn của các số liền kề nhau 
    
    int sumRange(int left, int right) {
        return ans[right+1] - ans[left]; // lấy tổng sau cùng - tổng ở left là ra giá trị ở giữa 
    }// right+1 ko sợ tràn mảng vì ans[n+1] chứ ko phải ans[n] , hơn nums 1 phần tủ 
};

int main (){    

    vector<int> v = {-2, 0, 3, -5, 2, -1};
    int l = 0;
    int r = 5;
    NumArray *num = new NumArray(v);
    int result = num->sumRange(l,r);
    cout << result << endl;
    return 0;
}
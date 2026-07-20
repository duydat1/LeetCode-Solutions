#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 ; int r = nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2; 
            if (nums[mid] == target) return (mid) ; // logic bên dưới sẽ chạy đến khi nào dòng này đúng ;))
            if(l <= mid){
                if(nums[l] <= target && target < nums[mid]){
                    r = mid - 1; // bỏ toàn bộ bên phải mid 
                }
                else l = mid+1 ; // nếu ko có thì ngay lập tức if l<= mid sẽ sai và ko bh đúng nữa 
            }
            else if(r > mid) { // tương tự nó sẽ chỉ chạy 1 là if , 2 là else if , if sai thì else if sẽ đúng , ko bỏ sót cái j 
                if(nums[mid] < target && target <= nums[r]){
                    l = mid + 1;
                }
                else r = mid-1 ;
            }
            // nếu cả if và else if ko chạy đc tức là ko có và tự phá hủy while nhờ 2 cái else con 
        }
        return -1;
    }
};

int main(){
    
    vector<int> v = {3,4,5,6,7,-1,0,1,2};
    int target = -1;
    Solution sol;
    int result = sol.search(v,target) ;
    cout << result  << endl;

    return 0;
}
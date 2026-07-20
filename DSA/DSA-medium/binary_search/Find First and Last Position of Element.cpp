#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans_first = -1;
        int ans_last = -1;

        // chặn đầu 
        int l = 0, r = nums.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] == target) {
                ans_first = mid;  // Đớp tạm vị trí này
                r = mid - 1;      // Kiên quyết ép biên phải về bên TRÁI để tìm thằng đầu tiên hơn
            }
            else if(nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }

        // chặn đuôi 
        l = 0; r = nums.size() - 1; // Reset lại 2 con trỏ về ban đầu
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] == target) {
                ans_last = mid;   // Đớp tạm vị trí này
                l = mid + 1;      // Kiên quyết ép biên trái sang bên PHẢI để tìm thằng cuối cùng hơn
            }
            else if(nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }

        return {ans_first, ans_last};
    }
};

int main(){
    
    vector<int> v = {5,8,8,8,8,8,8,8,8,10};
    int target = 8;
    Solution sol ;
    cout << 1 << endl;
    vector<int> result = sol.searchRange(v,target);
    cout << "[" << result[0] << ", " << result[1] << "]\n"; // đcu tưởng code lỗi ai ngờ quên in ạ ;))) /// code lỗi thật -_-
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0 ;  
        vector<vector<int>> ans ;
        sort(nums.begin() , nums.end());// sắp xếp
        for( i=0 ; i<(int)nums.size(); i++){ //nums.size() ko phải là 'int' mà là 'int không dấu' 
            int j = i+1 ; int k = nums.size()-1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            while(j<k){
                // nums[i] + nums[j] + nums[k] = 0
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0){
                    ans.push_back({nums[i] , nums[j] , nums[k]});
                    j++ ; k-- ; // =0 r thì đổi 2 số mới nếu chỉ đổi 1 số có thể bị trùng 
                    // nếu mà gặp số trùng thì bỏ qua luôn 
                    // nên đặt trong sum==0 vì kiểu nó phải thế , đừng nghĩ tại sao nữa -_-
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                }
                else if (sum < 0)   j++;
                else if (sum > 0)   k--;
                
            }  
        }
        return ans;
    }
}; 


int main(){

    vector<int> v = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(v);
    for (const auto& x : result) {
        cout << "  [" << x[0] << ", " << x[1] << ", " << x[2] << "]\n";
    }
    
    return 0;
}   
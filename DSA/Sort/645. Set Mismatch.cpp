#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> ans(2);
        for(int i=0 ; i<n ; i++){  
            int ind = abs(nums[i]) -1 ;
            if(nums[ind] > 0) nums[ind] = -nums[ind] ; 
            else ans[0] = abs(nums[i]) ; 
        }
        for(int i=0 ; i<n ; i++){  
            if(nums[i] > 0) ans[1] = i+1;
        }
        return ans ; 
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> nums = {1,2,2,3,4,5,6,7,8,9};
    vector<int> ans = sol.findErrorNums(nums);
    cout << ans[0] << " , " << ans[1] << endl ; 
    return 0 ;
}







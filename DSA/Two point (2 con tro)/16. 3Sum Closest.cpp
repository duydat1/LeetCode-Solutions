
#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()) ; 
        int closestSum = 0 ; 
        int diff_min = INT_MAX ; 
        int n = nums.size() ; 
        for (int i=0 ; i<n-2 ; i++ ){
            int left = i+1 ; 
            int right = n-1 ; 
            while(left<right){
                int currentSum = nums[i] + nums[left] + nums[right] ; 
                int diff = abs(currentSum - target) ; 
                if ( diff_min > diff ){
                    diff_min = diff ; 
                    closestSum = currentSum ; 
                }
                if (currentSum > target) right--;
                else if (currentSum < target) left++;
                else return currentSum ;
            }
        }
        return closestSum;
    }
};

int main(){     
        
    Solution sol ;
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    cout << sol.threeSumClosest(nums , target) << endl ; 


    return 0 ;
}



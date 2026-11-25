#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int one = LONG_MIN;
        int two = LONG_MIN;
        int three = LONG_MIN;

        for(int num:nums){
            if(num == one || num == two || num == three) continue ; 
            else if(num > one){
                three = two ; 
                two = one ; 
                one = num ; 
            }
            else if(num > two){
                three = two ; 
                two = num ; 
            }
            else if(num > three){
                three = num ; 
            }
        }
        return three == LONG_MIN ? one : three ; 
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> nums = {1,2};
    cout << sol.thirdMax(nums);
    return 0 ;
}







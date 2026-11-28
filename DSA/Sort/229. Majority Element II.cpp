#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0 , cnt2 = 0 ;
        int max1 = 0 , max2 = 0 ; 
        vector<int> ans ; 

        for(int num:nums){
            if(num == max1) cnt1++;
            else if(num == max2) cnt2++;
            else if(cnt1 == 0){
                max1 = num ; 
                cnt1++ ; 
            }
            else if(cnt2 == 0){
                max2 = num ; 
                cnt2++ ; 
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = cnt2 = 0 ; 

        for(int num:nums){
            if(num == max1) cnt1++;
            else if(num == max2) cnt2++;
        }

        if(cnt1 > (int)nums.size()/3) ans.push_back(max1);
        if(cnt2 > (int)nums.size()/3) ans.push_back(max2);
    }
};

int main(){     
        
    
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans ; 

        for(int i=0 ; i<(int)nums.size() ; i++){
            int cnt = 0 ; 
            for(int j=0 ; j<(int)nums.size() ; j++){
                if(j!=i && nums[j] < nums[i]) 
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans ;
    }
};

int main(){     
        
    
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//EAZY 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        vector<int> ans ; 
        int n = nums1.size() , m = nums2.size() ; 
        int i = 0 , j = 0 ;

        while(i < n && j < m ){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        return ans ; 
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> nums1 = {1, 2, 1,1,2, 1};
    vector<int> nums2 = {2, 2,1,1};
    vector<int> ans = sol.intersect(nums1,nums2);
    for(auto a:ans ) cout << a << " , ";
    return 0 ;
}








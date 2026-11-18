#include<bits/stdc++.h>
using namespace std;

//HARDCODE

class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int left = 0 , right = n-1 ; 
        int left_max = 0,right_max = 0 ; 
        int ans = 0 ; 

        while(left < right ){
            left_max = max(left_max , h[left]);
            right_max = max(right_max , h[right]);
            
            if(left_max < right_max){
                ans += left_max - h[left];
                left++;
            }
            else if(left_max >= right_max){
                ans += right_max - h[right];
                right--;
            }
        }
        return ans ; 
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << sol.trap(height);
    return 0 ;
}







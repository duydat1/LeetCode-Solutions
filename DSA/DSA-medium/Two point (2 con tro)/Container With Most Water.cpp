#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 ;
        int r = height.size() -1;
        int ans = 0 ;
        while(l<r){
            if(height[l] < height[r]){
                int S = height[l] * (r-l);
                ans = max(ans , S);
                l++;
            }
            else{
                int S = height[r] * (r-l);
                ans = max(ans , S);
                r--;
            }
        }
        return ans;
    }
};



int main(){
    
    
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    Solution sol ;
    int result = sol.maxArea(v);

    cout << "Ket qua : " << result << endl;
    
    
    
return 0;
}
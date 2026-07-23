#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0] = -1;
        int ans = 0 ;
        int sum = 0 ;
        for(int i=0 ; i<(int)nums.size() ; i++){
            sum += nums[i] == 1 ? 1:-1;

            if(m.count(sum))
                ans = max(ans,i-m[sum]);
            else m[sum] = i;
        }
        return ans;
    }
};

int main(){
    
    vector<int> v = {0,1,0,0,0,1,1,1};
    Solution sol;
    int result = sol.findMaxLength(v);
    cout << result << endl;
    return 0 ;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump = 0 ;

        for(int i=0 ; i< (int)nums.size() ; i++){
            if(max_jump < i ) return false ; // quá i r thì ko đến đc end() -> false  bị kẹt ở giữa rùi tại ko có i nào < nums.size() để nhảy đến 
            // i tăng thì max_jumb cũng tăng nên chỉ khi max_jumb thì i mới có thể > đc 
            max_jump = max(max_jump , nums[i]+i); // i+ nums[i] sẽ = i tiếp theo 
        }
        return true; // đến được end() -> true 
    }
};

int main(){

    vector<int> v = {2,3,1,1,4};
    Solution sol;
    bool result = sol.canJump(v);
    if(result)
        cout << "true" << endl;
    else cout << "false" << endl;
    return 0 ;
}
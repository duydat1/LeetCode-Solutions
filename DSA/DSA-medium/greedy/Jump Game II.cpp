#include<bits/stdc++.h>
using namespace std;

// Đã là greedy thì quá mảng cũng đc , ko nhất thiết phải là vector.size()-1 -_-
class Solution {
public:
    int jump(vector<int>& nums) {
        int max_i = 0 ;
        int ans = 0;
        int longest = 0;
        for(int i=0 ; i<(int)nums.size() - 1 ; i++){
            max_i = max(max_i , nums[i] + i);
            if(i == longest){ // i phải tới đc vị trí cũ thì mới +1 bước nhẩy mới 
                ans++ ;
                longest = max_i;
            }
        }
        return ans ;
    }
};

int main(){
    
    vector<int> v = {2,3,1,1,4};
    Solution sol;
    int result = sol.jump(v);
    cout << result << endl; 
    return 0 ;
}
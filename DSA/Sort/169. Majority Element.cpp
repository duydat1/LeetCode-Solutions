#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = 0, cnt = 0;
        for (int x : nums) {
            if (cnt == 0) {
                curr = x; 
                cnt = 1; 
            }
            else if (x == curr) cnt++;
            else cnt--;
        }
        return curr;
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> v = {6,5,5};
    cout << sol.majorityElement(v) << endl;
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>, greater<int>> min;
        for(int num : nums){
            min.push(num);
            if (!min.empty() && (int)min.size() > k) // cho số bé nhất ra , đỡ tốn bộ nhớ
                min.pop();
        }
        return min.top() ;
    }
};

int main(){
    
    vector<int> v = {3,2,3,1,2,4,5,5,6};
    Solution sol;
    int result = sol.findKthLargest(v , 4);
    cout << result << endl;
    return 0 ;
}
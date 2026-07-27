#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d ;
        vector<int> ans;
        for (int i=0 ; i<(int)nums.size() ; i++){ // thêm 3 phần tử đầu tiên trước
            if(!d.empty() && d.back() <= i-k )
                d.pop_back(); // những thằng mà cửa sổ đã đi qua thì xóa đi , nhỡ nó top 1 sever thì khê
            while(!d.empty() && nums[i] >= nums[d.front()])
                d.pop_front();
            d.push_front(i);
            if(i >= k - 1)
                // cứ thằng đứng cuối mà nhét vào 
                ans.push_back(nums[d.back()]);
        }
        return ans;
    }

};

int main(){
    
    vector<int> v= {1,-1};
    Solution sol;
    vector<int> result = sol.maxSlidingWindow(v,1);

    for(int x: result )
        cout << x << " " ;
    return 0 ;
}
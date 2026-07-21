#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = (int)nums.size() ;
        stack<int> st ;
        vector<int> ans (n,-1);
        st.push(0); // thêm i=0

        for(int i=1 ; i<= 2*n-1 ; i++){// i=0 đã đưa vào stack r 
            while(!st.empty() && nums[st.top()] < nums[i%n] ){ // nế 0 < 1 . số bị chia < số chia thì số dư luôn = số bị chưa <=> i%n = i hoặc = 0; i++
                // nếu i%n = 0 tức là hết 1 vòng , i lại ++ =1 để chạy vòng 2 mà ko sợ bị vượt hàm 
                ans[st.top()] = nums[i%n];
                st.pop() ; 
            }
            if (i < n)
                st.push(i%n);
            
        }
        return ans;
    }
};

int main(){
    vector<int> v = {1,2,3,4,3};
    Solution sol;
    vector<int> result = sol.nextGreaterElements(v);

    for(auto x:result)
        cout << x << " " ;
    return 0;
}
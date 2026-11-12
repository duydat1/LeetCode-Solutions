#include<bits/stdc++.h>
using namespace std;

//HARD

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size() ; 
        if (n == 0) return 0;
        if (n == 1) return heights[0];
        stack<int> st1 ; 
        st1.push(0);
        stack<int> st2 ; 
        st2.push(n-1);

        vector<int> right(n,n);
        vector<int> left(n,-1);

        for(int i=1 ; i<n ; i++){
            while(!st1.empty() && heights[i] < heights[st1.top()]){
                right[st1.top()] = i;
                st1.pop();
            }
            st1.push(i);
        }                                           //2,4

        for(int i=n-2 ; i>=0 ; i--){
            while(!st2.empty() && heights[i] < heights[st2.top()]){
                left[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }   

        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            ans = max(ans, (right[i] - left[i] -1) * heights[i]);
        }
        return ans ; 
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> v = {2,4} ; 
    cout << sol.largestRectangleArea(v) << endl ;
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st ; 

        for(int x : as){
            if(!st.empty() && st.top()>0 && x<0){
                while(!st.empty() && st.top()>0 && st.top()<-x) st.pop();
                if(st.empty() || st.top()<0) st.push(x);
                else if(st.top() == -x) st.pop() ; 
            }
            else if(st.empty() || st.top()<0 || x>0) st.push(x);
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> as = {3,5,-6,2,-1,4};
    vector<int> res = sol.asteroidCollision(as);

    for(int x:res) cout << x << " " ; 
    return 0 ;
}







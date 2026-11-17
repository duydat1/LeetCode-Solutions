#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
    public:
        int sumSubarrayMins(vector<int>& arr) {
            long long sum = 0 ; 
            int MOD = 1e9 + 7;
            int n = arr.size() ; 
            vector<int> st ; 

            for(int i=0 ; i<n ; i++){
                while(!st.empty() && arr[st.back()] >= arr[i]){
                    int left,curr = st.back();
                    st.pop_back();
                    left = st.empty() ? -1 : st.back();
                    sum += (1ll * arr[curr] * (curr-left) * (i-curr) ) % MOD;
                }
                st.push_back(i);
            }

            while(!st.empty()){
                int left,curr = st.back();
                st.pop_back();
                left = st.empty() ? -1 : st.back();
                sum += (1ll * arr[curr] * (curr-left) * (n-curr) ) % MOD;
            }

            return sum%MOD ; 
        }
};

int main(){     
        
    Solution sol ; 
    vector<int> arr = {3,1,2,4};

    cout << sol.sumSubarrayMins(arr);
    return 0 ;
}







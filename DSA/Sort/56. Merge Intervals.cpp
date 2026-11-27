#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end()) ; 
        vector<vector<int>> ans ; 
        ans.push_back(intervals[0]);

        for(int i=1 ; i<(int)intervals.size() ; i++){
            if(intervals[i][0] <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans ;
    }
};

int main(){     
        
    Solution sol ; 
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}}; 
    vector<vector<int>> ans = sol.merge(intervals);
    for(int i=0 ; i<(int)ans.size() ; i++){
        for(int j=0 ; j<2 ; j++){
            cout << ans[i][j] << " " ; 
        }
        cout << endl ; 
    }
    return 0 ;
}







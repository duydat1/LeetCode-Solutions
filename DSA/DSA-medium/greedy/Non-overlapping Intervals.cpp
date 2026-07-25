#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int , int>> p ;
        int ans = 0;
        for(int i=0 ; i<(int)intervals.size() ; i++ ){
            p.push_back(make_pair(intervals[i][0] , intervals[i][1]));
        }
        sort(p.begin(), p.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
            return a.second < b.second ;});

        int p_end = p[0].second;
        for (int i = 1; i < (int)p.size(); i++) {
            if (p[i].first < p_end)   ans++;
            else   p_end = p[i].second;
        }
        return ans;
    }
};

int main(){
    
    vector<vector<int>> v = {{1,2}, {2,3}, {3,4}, {1,3}};
    Solution sol;
    int result = sol.eraseOverlapIntervals(v);
    cout << result << endl;
    return 0 ;
}
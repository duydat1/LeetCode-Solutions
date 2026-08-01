#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = (int)prerequisites.size();
        vector<vector<int>> vec(numCourses);
        vector<int> dem(numCourses , 0);
        queue<int> q;
        vector<int> ans;
        
        for(int i=0 ; i<n ; i++){
            int u = prerequisites[i][0] ;
            int v = prerequisites[i][1];
            vec[v].push_back(u);
            dem[u]++;
        }
        for(int i=0 ; i<(int)vec.size() ; i++)
            if(dem[i] == 0){
                q.push(i);
                ans.push_back(i);
            }
        while(!q.empty()){
            int temp = q.front(); q.pop();
            for(int x : vec[temp]){
                dem[x]--;
                if(dem[x] == 0){
                    q.push(x);
                    ans.push_back(x);
                }
            }
        }
        return (int)ans.size() == numCourses ? ans: vector<int>{};
        
    }
};

int main(){     
        
    vector<vector<int>> v = {};
    Solution sol;
    vector<int> result = sol.findOrder(1 , v);

    for(auto x : result)
        cout << x << " ";

    return 0 ;
}











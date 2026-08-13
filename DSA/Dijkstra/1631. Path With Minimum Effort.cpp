#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;

        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});

        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};

        while(!pq.empty()){
            auto [d,r] = pq.top(); pq.pop();
            int x = r.first, y = r.second;
            if(d > dist[x][y]) continue;
            if(x == n-1 && y == m-1) return d; // tới đích

            for(int k=0;k<4;k++){
                int nx = x+dx[k], ny = y+dy[k];
                if(nx>=0 && nx<n && ny>=0 && ny<m){
                    int w = abs(heights[x][y] - heights[nx][ny]);
                    int nd = max(dist[x][y], w);
                    if(nd < dist[nx][ny]){
                        dist[nx][ny] = nd;
                        pq.push({nd,{nx,ny}});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};

int main(){     
        
    vector<vector<int>> h = {{1,2,2},{3,8,4},{5,3,5}};
    Solution sol;
    cout << sol.minimumEffortPath(h);
    return 0 ;
}







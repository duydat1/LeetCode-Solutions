#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = (int)grid.size();
        int m = (int)grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        grid[0][0] = 1; //  Đánh dấu là đã đi qua
        q.push({0,0});

        int xx[8] = {1,-1,0,0,1,1,-1,-1};
        int yy[8] = {0,0,1,-1,1,-1,1,-1};
        while(!q.empty()){
            auto [x,y] = q.front() ; q.pop();
            int ans = grid[x][y];
            if(x == n-1 && y == m-1) return ans;
            for(int k=0 ; k<8 ; k++){
                int nx = x + xx[k];
                int ny = y + yy[k];
                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny] == 0){
                    grid[nx][ny] = ans+1;
                    q.push({nx,ny});
                }
            }
        }
        return -1;
    }
};

int main(){     
        
    vector<vector<int>> v = {{1,0,0},{1,1,0},{1,1,1}};
    Solution sol;
    cout << sol.shortestPathBinaryMatrix(v);
    
    return 0 ;
}











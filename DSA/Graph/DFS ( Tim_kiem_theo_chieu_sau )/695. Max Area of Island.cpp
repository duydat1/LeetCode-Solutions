#include<bits/stdc++.h>
using namespace std;

class Solution {
    int n , m ;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = (int)grid.size();
        m = (int)grid[0].size();
        int ans = 0;
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++){
                int temp_ans = dfs(grid,i,j);
                ans = max(ans,temp_ans);
            }
        return ans ;
    }
    int dfs(vector<vector<int>>& grid , int i , int j){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] ==0)  return 0 ;
        grid[i][j] = 0;
        int temp = 1;
        temp += dfs(grid , i +1 , j);
        temp += dfs(grid , i -1 , j);
        temp += dfs(grid , i , j + 1);
        temp += dfs(grid , i , j - 1);
        return temp ;
    }
};

int main(){     
        
    vector<vector<int>> v = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
                            {0,0,0,0,0,0,0,1,1,1,0,0,0},
                            {0,1,1,0,1,0,0,0,0,0,0,0,0},
                            {0,1,0,0,1,1,0,0,1,0,1,0,0},
                            {0,1,0,0,1,1,0,0,1,1,1,0,0},
                            {0,0,0,0,0,0,0,0,0,0,1,0,0},
                            {0,0,0,0,0,0,0,1,1,1,0,0,0},
                            {0,0,0,0,0,0,0,1,1,0,0,0,0}};
    Solution sol ;
    cout << sol.maxAreaOfIsland(v);
    return 0 ;
}











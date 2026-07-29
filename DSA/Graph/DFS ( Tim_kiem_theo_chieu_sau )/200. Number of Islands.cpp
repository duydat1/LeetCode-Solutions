#include<bits/stdc++.h>
using namespace std;

class Solution {
    int n , m ;
public:
    int numIslands(vector<vector<char>>& grid) {
        n = (int)grid.size(); // số hàng 
        m = grid.empty() ? 0 : (int)grid[0].size(); // số cột 
        int ans = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] == '1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<char>>& grid , int i, int j ){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == '0')
            return ;
        
        grid[i][j] = '0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
};

int main(){     
    
    vector<vector<char>> v = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    Solution sol;
    cout << sol.numIslands(v) << endl; 

    return 0 ;
}




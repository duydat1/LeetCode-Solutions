#include<bits/stdc++.h>
using namespace std;

// Bắt đầu nản r :(((
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = (int)mat.size();
        int m = (int)mat[0].size();
        vector<vector<int>> ans (n , vector<int> (m , -1)) ;
        queue<pair<int , int>> q ;
        
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++)
                if(mat[i][j] == 0){
                    ans[i][j] = 0 ;
                    q.push({i,j});
                }
        int xx[4] = {1,-1,0,0};
        int yy[4] = {0,0,1,-1};
        while(!q.empty()){
            int sz = q.size();
            for(int i=0 ; i<sz ; i++){
                auto [x,y] = q.front() ; q.pop();
                for(int k=0 ; k<4 ; k++ ){
                    int nx = xx[k] + x ;
                    int ny = yy[k] + y ;
                    if(nx>=0 && nx<n && ny>=0 && ny<m && ans[nx][ny] == -1){
                        ans[nx][ny]=ans[x][y]+1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return ans ;
    }
    
};

int main(){     
        
    vector<vector<int>> v = {{1,1,1},{1,1,1},{1,1,1}};
    Solution sol;
    vector<vector<int>> result =  sol.updateMatrix(v);
    for(int i=0 ; i<(int)v.size() ; i++){
        for(int j=0 ; j<(int)v[0].size() ; j++)
            cout << result[i][j] << " " ;
        cout << endl;
    }
    
    return 0 ;
}











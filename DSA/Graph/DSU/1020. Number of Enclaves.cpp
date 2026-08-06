#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent ;
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = (int)grid.size();
        int n = (int)grid[0].size();
        parent.resize(n*m+1);
        for(int i=0 ; i<n*m+1 ; i++) parent[i] = i;

        auto id = [&](int x , int y ){
            return  x*n+y+1 ; // Chuyển từ 2D -> 1D
        };

        for(int i=0 ; i<m ; i++)
            for(int j=0 ; j<n ; j++){
                if( grid[i][j] == 1 && (i == 0 || i == m - 1 || j == 0 || j == n - 1)){ // nếu ô ở biên = 1 ,đưa về chung gốc với 0 
                    int u = id(i,j); // Lấy id 
                    int root_u = find(u) ;
                    int root_0 = find(0);
                    if(root_u != root_0) parent[root_u] = root_0; //  Gộp u vào đỉnh 0 
                }
            }
        int x[2] = {0,1};
        int y[2] = {1,0};
        for(int i=0 ; i<m ; i++) // Duyệt các ô 1 cạnh ô 1 ở biên 
            for(int j=0 ; j<n ; j++){
                if(grid[i][j] == 0 ) continue;  // Chạy đến khi gặp số 1 
                for(int k=0 ; k<2 ; k++){ 
                    int rx = x[k] + i; // Duyệt 2 chiều phải và dưới
                    int ry = y[k] + j;
                    if(rx<m && ry<n && grid[rx][ry] == 1){
                        int u = find(id(i,j));
                        int v = find(id(rx , ry));
                        if(u != v) parent[v] = u;
                        // Nếu u hoặc v đang có gốc là 0 thì cái còn lại sẽ được đưa về gốc 0 
                         // Còn nếu cả 2 ko thuộc gốc 0 thì nó sẽ tự động gắn 2 cái thành cùng 1 gốc u(tách thành 1 đảo riêng biệt ) . 
                    }
                }
            }
        int ans = 0 ;
        for(int i=0 ; i<m ; i++)
            for(int j=0 ; j<n ; j++){
                if(grid[i][j] == 0 ) continue;
                int root_u = find(id(i,j));
                int root_0 = find(0) ;
                if(root_u != root_0) ans++;
            }
        return ans ;
    
    }
    int find(int i){
        return parent[i] == i? i:parent[i] = find(parent[i]);
    }
};

int main(){     
        
    vector<vector<int>> v = {{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}};
    Solution sol;
    cout << sol.numEnclaves(v) << endl;

    return 0 ;
}







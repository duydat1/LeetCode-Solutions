#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = (int)grid.size();
        int m = grid.empty() ? 0: (int)grid[0].size();
        int fruit = 0;
        int minutes = 0;
        queue<pair<int , int>> pq; 
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] == 2) pq.push({i,j}); // Đếm xem có bao nhiêu số 2 <=> số lượng cam thối HIỆN TẠI
                else if (grid[i][j] == 1) fruit++; // Đếm xem có bao nhiêu số 1 
            }

        if(fruit == 0) return 0 ;
        
        int xx[4] = {1,-1,0,0};
        int yy[4] = {0,0,1,-1};
        while(!pq.empty()){
            int size_pq = (int)pq.size();
            bool check = false ;
            for(int i=0 ; i<size_pq ; i++){
                auto [x,y] = pq.front() ; pq.pop();
                for(int k=0 ; k<4 ; k++){
                    int nx = x + xx[k];// Tạo ra nx , ny sau đó nó sẽ lặp qua if bên dưới để biến toàn bộ số 1 ở 4 hướng thành 2
                    int ny = y + yy[k];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny] == 1){ // || là toang ngay :)))
                        grid[nx][ny] = 2;
                        fruit--;
                        pq.push({nx,ny}); // Cam thối ở lần cũ đã xóa hết , thêm cam MỚI THỐI vào
                        check = true; 
                    }
                }
            }
            if(check) minutes++;// nếu để minutes trong if bên trên luôn thì for nó lặp cho phát 4 lần là cút luôn
        }
        return fruit == 0 ? minutes : -1;
    }

};

int main(){     
        
    vector<vector<int>> v = {{2,1,1},{1,1,0},{0,1,1}};
    Solution sol;
    cout << sol.orangesRotting(v);
    return 0 ;
}











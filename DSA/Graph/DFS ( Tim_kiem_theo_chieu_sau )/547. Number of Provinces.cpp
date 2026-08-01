#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = (int)isConnected.size();
        vector<int> visited(n , 0);
        int ans = 0 ;

        for(int i=0 ; i<n ; i++)
            if(!visited[i]){ // <=> visited[i] = 0 ; 
                dfs(isConnected , visited , i , n);
                ans++;
            }
        return ans ;
    }
    void dfs(vector<vector<int>>& isConnected , vector<int>& visited , int i , int n ){
        visited[i] = 1; // Đánh dấu là đã duyệt qua r -_-
        for(int j=0 ; j<n ; j++)
            if(isConnected[i][j] == 1 && !visited[j]) // Nếu có đường nối từ i->j và j chưa được duyệt qua 
                dfs(isConnected , visited , j , n); // Thì chạy lại để duyệt qua thui
    }
};

int main(){     
        
    vector<vector<int>> v = {{1,1,0},{1,1,0},{0,0,1}};
    Solution sol;
    cout << sol.findCircleNum(v);
    return 0 ;
}











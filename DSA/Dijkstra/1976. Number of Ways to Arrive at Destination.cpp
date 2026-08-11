#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0 ; i<(int)roads.size() ; i++){
            int u = roads[i][0] , v = roads[i][1] , w = roads[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        vector<long long> dist (n , 1e18);  dist[0] = 0; // 1e18 cho số nó to để ko bị tràn trọng số (chứ bao nhiêu cũng đc )
        vector<int> ways (n , 0) ; ways[0] = 1 ; // Đếm số đường đi ngắn nhất 

        priority_queue<pair<long long,int> , vector<pair<long long,int>> , greater<pair<long long,int>>> pq;
        pq.push({0,0}); // Đỉnh bắt đầu là 0

        const int MOD = 1e9 + 7 ;
        while(!pq.empty()){
            auto [d,u] = pq.top() ; pq.pop();
            if(d > dist[u]) continue;
            
            for(auto& [v,w] : adj[u]){
                if(dist[u] + w < dist[v]){ // < tức là v đang lớn hơn 
                    dist[v] = dist[u] + w;// Vậy thì đổi giá trị tại v 
                    ways[v] = ways[u];// nhưng v vẫn là v , v > dist[u] + w nên -> u < v -> chèn đường đi của v thành u (đổi thành giá trị min )
                    pq.push({dist[v],v});
                }
                else if(dist[u] + w == dist[v]) ways[v] = (ways[u] + ways[v]) % MOD;
                // Nếu gặp 2 giá trị min = nhau thì cộng lại với nhau thui,chia MOD lấy dư để số đỡ to 
            }            
        }
        return ways[n-1]; //Các số trong ways tăng dần lên 1,2,3,4,... nên khi duyệt xong toàn bộ thì số lượng min bằng nhau chính là n-1
    }
};

int main(){     
        
    int n = 7;
    vector<vector<int>> roads = {{0,6,7},{0,1,2},{1,2,3},{1,3,3},{6,3,3},{3,5,1},{6,5,1},{2,5,1},{0,4,5},{4,6,2}};
    Solution sol;
    cout << sol.countPaths(n , roads) << endl ;
    return 0 ;
}







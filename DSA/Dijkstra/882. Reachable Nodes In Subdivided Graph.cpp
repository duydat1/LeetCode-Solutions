#include<bits/stdc++.h>
using namespace std;

// HARDCORD 
class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<vector<pair<int,long long>>> adj(n);
        for(auto& edge:edges){
            int u = edge[0] , v = edge[1] , w = edge[2]; // coi w là trọng số luôn 
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        vector<long long > dist(n,1e18);
        dist[0] = 0;
        priority_queue<pair<long long,int> , vector<pair<long long,int>> , greater<pair<long long,int>>> pq;
        pq.push({0,0});

        while(!pq.empty()){
            auto [d,u] = pq.top() ; pq.pop();
            if(d > dist[u]) continue;

            for(auto& [v,w] : adj[u]){
                if(dist[u] + w + 1 < dist[v]){
                    dist[v] = dist[u] + w + 1;
                    pq.push({dist[v] , v});
                }
            }
        } // làm như bth thôi , cũng chỉ là dùng dịkstra để tìm đường ngắn nhất r đếm số lượng node đã đi qua 

        int node_chinh = 0;
        for(int i=0 ; i<n ; i++)
            if(dist[i] <= maxMoves) node_chinh++; // node chính là các node ban đầu 

        long long node_phu = 0 ; // node phụ là các node thêm vào lúc sau ( có thể có rất nhiều )
        for(auto& edge : edges){
            int u = edge[0] , v = edge[1] , w = edge[2]; 
            long long reach_u = dist[u] > maxMoves ? 0: maxMoves - dist[u]; // xét từ đỉnh đầu nếu < maxMoves thì lấy số lượng các node có thể đi qua tại đó 
            long long reach_v = dist[v] > maxMoves ? 0: maxMoves - dist[v]; // cũng thế nma xét từ đỉnh sau trở về 
            node_phu += min((long long)w, reach_u + reach_v);// so sánh với w để ko bị vượt quá số lượng node đề cho
            //  reach_u + reach_v là tổng số lượng node phụ có thể đi qua ở cả 2 đầu 
        }

        return node_phu + node_chinh ; 
    }
};

int main(){     
        
    
    return 0 ;
}







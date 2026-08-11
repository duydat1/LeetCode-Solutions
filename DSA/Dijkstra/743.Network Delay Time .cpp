#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // Tạo adjacency list với n+1 node (đánh số từ 1 đến n)
        vector<vector<pair<int,int>>> adj(n+1);

        // Duyệt qua danh sách cạnh times, mỗi cạnh có dạng {u, v, w}
        for(auto& t : times){
            int u = t[0], v = t[1], w = t[2];
            adj[u].push_back({v,w}); // thêm cạnh u -> v với trọng số w
        }

        // Khởi tạo mảng dist, lưu khoảng cách ngắn nhất từ k đến mỗi node
        vector<int> dist(n+1 , 1e9); // ban đầu gán vô cực
        dist[k] = 0 ;                // khoảng cách từ k đến chính nó = 0

        // Priority queue (min-heap) lưu {khoảng cách, node}
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
        pq.push({0,k}); // bắt đầu từ node k với khoảng cách 0

        // Vòng lặp Dijkstra
        while(!pq.empty()){
            auto [d,u] = pq.top(); pq.pop(); // lấy node có dist nhỏ nhất
            if(d > dist[u]) continue ;       // nếu dist đã tốt hơn thì bỏ qua

            // Duyệt tất cả cạnh xuất phát từ u
            for(auto& [v,w] : adj[u]){
                // Nếu đi qua u đến v có đường ngắn hơn
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;   // cập nhật khoảng cách
                    pq.push({dist[v], v});   // đưa v vào hàng đợi
                }
            }
        }

        // Sau khi chạy xong, kiểm tra kết quả
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(dist[i] == 1e9) return -1; // nếu có node không tới được thì trả -1
            ans = max(ans, dist[i]);      // lấy khoảng cách lớn nhất
        }
        return ans ; // trả về thời gian trễ lớn nhất
    }
};


int main(){     
        
    vector<vector<int>> times= {{2,1,1},{2,3,1},{3,4,1}};
    int n = 4 , k = 2 ;
    Solution sol;
    cout << sol.networkDelayTime(times , n , k);
    return 0 ;
}







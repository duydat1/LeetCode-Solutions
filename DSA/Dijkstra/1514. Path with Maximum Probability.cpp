#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0; i<(int)edges.size(); i++){
            int u = edges[i][0], v = edges[i][1];
            double w = succProb[i];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w}); // đồ thị vô hướng
        }

        vector<double> dist(n, 0.0); // Ban đầu sác xuất = 0.0
        dist[start_node] = 1.0;

        // max-heap theo xác suất lớn nhất
        priority_queue<pair<double,int>> pq;
        pq.push({1.0, start_node}); // first là w , second là node start

        while(!pq.empty()){
            auto [d,u] = pq.top(); pq.pop();
            if(d < dist[u]) continue; // bé hơn thì bỏ qua vì t đang cần tìm cái lớn nhất 

            for(auto& [v,w] : adj[u]){ // v là đỉnh đầu , w là trọng số 
                if(dist[u] * w > dist[v]){
                    dist[v] = dist[u] * w;
                    pq.push({dist[v], v}); // push trọng số tại điểm v và dỉnh v vào lại pq để duyệt các đỉnh kề nó nữa 
                }
            }
        }
        // Sau khi duyệt xong toàn bộ thì mỗi nơi đều có kết quả riêng , dist[end_node] là lấy result ở đỉnh end_node 
        return dist[end_node]; // xác suất lớn nhất 
    }
};


int main(){     
        
    int n = 3 , start = 0 , end = 2 ;
    vector<vector<int>> edges = {{0,1},{1,2},{0,2}};
    vector<double> succ = {0.5,0.5,0.2};

    Solution sol;
    cout << sol.maxProbability(n , edges , succ , start , end ) << endl;
    return 0 ;
}







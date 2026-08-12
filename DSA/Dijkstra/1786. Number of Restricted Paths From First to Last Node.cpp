#include<bits/stdc++.h>
using namespace std;

class Solution {
    int N ;
    vector<int> memory ;
    vector<vector<pair<int,long long>>> adj;
    vector<long long> dist;  
public:
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        N = n;
        adj.assign(n , {});
        for(auto& edge : edges){
            int u = edge[0]-1 , v = edge[1]-1 , w = edge[2] ;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        dist.assign(n , 1e18); dist[n-1] = 0;
        
        priority_queue<pair<long long,int> , vector<pair<long long,int>> , greater<pair<long long,int>>> pq ;
        pq.push({0,n-1}); // Nếu chạy từ node đầu tiên thì sẽ ko thể thấy đc các node tiếp theo giới hạn bao nhiêu , nên khi chạy ngược lại
        // sẽ duyệt từ đáy lên đầu , sẽ xác định đc đỉnh nào có thể đi qua cho đến node 0 thì dừng. 

        while(!pq.empty()){
            auto [d,u] = pq.top() ; pq.pop();
            if(d > dist[u]) continue ;

            for(auto& [v,w] : adj[u]){
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v] , v});
                }
            }
        }
        // Đã hoàn thành mọi thứ : Tìm ra đc khoảng cách ngắn nhất từ node x đến node n-1 và lưu toàn bộ vào dist , tạo dfs và dùng hàm dist này là xong 
        
        memory.assign(n, -1);// khởi tạo memo = -1 , đánh dấu chưa duyệt qua đỉnh nào 
        return run_dfs(0); // chạy bắt đầu từ node 0 -_- 
    }

    int run_dfs(int u ){
        if(u == N-1 ) return 1 ; // ko có đường nào có thể đi từ đầu đến cuối cả nên chỉ có 1 đường từ node cuối -> node cuối 
        if(memory[u] != -1 ) return memory[u];
        long long ways = 0 ; const int MOD = 1e9 + 7;
        for(auto& [v,w] : adj[u])
            if(dist[v] < dist[u]) // chỉ đi nếu khoảng cách giảm , đang xét ngược từ cuối lên đầu (node v = end ; node u = start) , đỉnh trước phải lớn hơn đỉnh sau thì mới đi qua đc 
                ways = (ways + run_dfs(v)) % MOD; // đi qua đc thì cộng lên , ko đi qua được thì thui 
        return memory[u] = ways; // gọi run_dfs(v) là để duyệt lại liên tục , tính số cách để từ v đến được đích 
        // làm xong tất cả thì lưu hết vào memory , những lần duyệt sau cứ nhẩy thẳng vào memory để dùng thui , ko cần duyệt liên tục dfs nữa 
    }
};

int main(){     
        
    int n = 5;
    vector<vector<int>> edges = {{1,2,3},{1,3,3},{2,3,1},{1,4,2},{5,2,2},{3,5,1},{5,4,10}};
    Solution sol;
    cout << sol.countRestrictedPaths(n , edges) << endl ;
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> check ;
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = (int)edges.size();
        check.resize(n+1);
        for(int i=1 ; i<=n ; i++) check[i] = i;
        for(auto const& edge : edges){
            int u = find(edge[0]);
            int v = find(edge[1]);
            if(u == v ) return edge;
            else check[u] = v;
        }
        return {};
    }
    int find(int i){
        if(check[i] == i) return i;
        return check[i] = find(check[i]);
    }
};

int main(){     
        
    vector<vector<int>> v = {{1,2},{1,3},{2,3}};
    Solution sol;
    vector<int> result = sol.findRedundantConnection(v);
    for(auto x : result ) cout << x << " ";
    return 0 ;
}











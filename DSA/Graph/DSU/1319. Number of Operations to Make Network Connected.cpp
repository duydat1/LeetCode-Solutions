#include<bits/stdc++.h>
using namespace std;

class Solution {

    vector<int> parent ;

public:

    int makeConnected(int n, vector<vector<int>>& connections) {
        if((int)connections.size() < n-1 ) return -1 ;
        parent.resize(n);
        // for(int i=0 ; i<n ; i++) parent[i] = i;
        iota(parent.begin(), parent.end(), 0);
        int ans = 0 ;
        for(auto &e : connections){
            int u = find(e[0]);
            int v = find(e[1]);
            if(u != v) parent[u] = v;
        }
        for(int i=0 ; i<n ; i++)
            if(parent[i] == i ) ans++;
        return ans - 1 ;
    }
    int find(int i){
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }
}; 



int main(){     
        
    
    return 0 ;
}







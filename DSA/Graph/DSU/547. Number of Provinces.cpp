#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> cha ;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = (int)isConnected.size() ;
        int dem = n;
        cha.resize(n);
        for(int i=0 ; i<n ; i++ ) cha[i] = i;

        for(int i=0 ; i<(int)isConnected.size(); i++)
            for(int j=0 ; j<(int)isConnected[0].size() ; j++)
                if(isConnected[i][j] == 1) {
                    int u = find(i);
                    int v = find(j);
                    if(u!=v) {
                        cha[u] = v;
                        dem--;
                    }
                }
        return dem;
    }

    int find(int i){
        if(cha[i] == i) return i ;
        return cha[i] = find(cha[i]);
    }
};

int main(){     
        
    vector<vector<int>> v = {{1,0,0},{0,1,0},{0,0,1}};
    Solution sol;
    cout << sol.findCircleNum(v);
    return 0 ;
}











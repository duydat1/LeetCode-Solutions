#include<bits/stdc++.h>
using namespace std;

class Solution {
    unordered_map<int,int> parent;
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = (int)stones.size();
        for(int i=0 ; i<n ; i++) parent[i] = i;

        for(auto& stone : stones){
            int x = find(stone[0]);
            int y = find(~stone[1]); // tăng y lên đễ ko bị trùng với x nếu x==y ; ~y = y + 10001
            if(x!=y) parent[x] = y; // Gộp hàng x và cột y vào chung 1 nhóm
        }
        unordered_set<int> roots;
        for(auto& stone : stones) // cùng x or y thì sẽ tự xóa , các cái còn lại là những cái ko bị trùng
            roots.insert(find(stone[0]));

        return n - (int)roots.size() ;
    }

    int find(int x){
        if(parent.find(x) == parent.end()) parent[x] = x; 
        return parent[x] == x? x : parent[x] = find(parent[x]);
    }
};

int main(){     
        
    vector<vector<int>> v = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    Solution sol;
    cout << sol.removeStones(v) << endl ;
    return 0 ;
}







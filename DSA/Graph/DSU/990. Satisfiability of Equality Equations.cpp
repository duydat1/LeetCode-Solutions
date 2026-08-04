#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent;
public:
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26);  
        for(int i=0 ; i<26 ; i++) parent[i] = i;
        for(auto& equa : equations){
            if(equa[1] == '='){
                int u = equa[0] - 'a';
                int v = equa[3] - 'a';
                if(u!=v)
                    parent[u] = v ;
            }
        }
        for (auto eq : equations)
            if(eq[1] == '!'){
                int u = eq[0] - 'a';
                int v = eq[3] - 'a';
                if(find(u) == find(v))
                    return false;
            }
        return true;
    }

    int find(int i){
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }
};

int main(){     
        
    vector<string> s = {"a==b","b!=a"};
    Solution sol;
    bool result = sol.equationsPossible(s);
    cout << (result ? "true" : "false") << endl;
    return 0 ;
}







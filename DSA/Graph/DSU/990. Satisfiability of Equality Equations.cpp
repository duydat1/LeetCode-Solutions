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
                int u = find(equa[0] - 'a');
                int v = find(equa[3] - 'a');
                if( u!=v ) // biết là = nhau r nma khác tên , đổi giá trị ở tên u = giá trị v 
                    parent[u] = v ; 
            }
        }
        for (auto eq : equations)
            if(eq[1] == '!'){
                int u = find(eq[0] - 'a');
                int v = find(eq[3] - 'a');
                if(u == v) // giá trị = nhau mà đề cho != là toang r 
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







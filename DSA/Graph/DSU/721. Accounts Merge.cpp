#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> p ;
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = (int)accounts.size() ;
        unordered_map<string , int > m;
        for(int i=0 ; i<n-1 ; i++)
            for(int j=1 ; j<(int)accounts[i].size() ; j++){
                string temp = accounts[i][j];
                if(m.count(temp)) ; 
                else m[temp] = i;
            }
        return accounts;
    }

    int find(int x){
        return p[x] == x ? x : p[x] = find(p[x]);
    }
};

int main(){     
        
    vector<vector<string>> v = {{"John","johnsmith@mail.com","john_newyork@mail.com"},
                                {"John","johnsmith@mail.com","john00@mail.com"},
                                {"Mary","mary@mail.com"},
                                {"John","johnnybravo@mail.com"}};
    Solution sol;
    vector<vector<string>> result = sol.accountsMerge(v);
    for(int i=0 ; i<(int)result.size() ; i++){
        for(int j=0 ; j<(int)result[i].size() ; j++)
            cout << result[i][j] << " ; " ;
        cout << endl ;
    }
    return 0 ;
}







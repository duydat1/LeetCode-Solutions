#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = (int)graph.size();
        vector<vector<int>> ans ;
        vector<int> path ;
        dfs(graph , 0 , path , ans , n);
        return ans ;

    }
    void dfs (vector<vector<int>>& graph , int temp , vector<int>& path , vector<vector<int>>& ans , int n ){
        path.push_back(temp);
        if(temp == n-1)  
            ans.push_back(path);
        else{
            for( int next : graph[temp]){
                dfs(graph , next , path ,ans , n);
            }
        }
        path.pop_back();
    }

};

int main(){     
        
    vector<vector<int>> v = {{1,2} , {3} , {3} , {}};
    Solution sol ;
    vector<vector<int>> result = sol.allPathsSourceTarget(v);

    for(int i=0 ; i<(int)result.size() ; i++){
        for(int j=0 ; j<(int)result[0].size() ; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0 ;
}











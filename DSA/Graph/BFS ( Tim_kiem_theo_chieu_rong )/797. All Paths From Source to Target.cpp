#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> ans ;
        queue<vector<int>> q ;
        q.push({0});
        while(!q.empty()){
            vector<int> path = q.front() ; q.pop();
                int last = path.back() ; 
                if(last == n-1) // Nếu last = n-1 thì tức là đã đi hết 1 vòng r 
                    ans.push_back(path); 
                else{
                    for(int next : graph[last]){ // Nếu chưa đi hết 1 vòng thì đi lần lượt đến các đỉnh tiếp theo 
                        vector<int> newpath = path; // liên tục tạo newpath mới , cái mới đè lên cái cũ 
                        newpath.push_back(next); // next lần lượt là các đỉnh của graph[last] 
                        q.push(newpath); // Lấy được đỉnh mới r thì đưa vào q để chạy lại vòng lặp while , check if bên trên true or false
                    }
            }
        }
        return ans ;
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











#include<bits/stdc++.h>
using namespace std;

// BFS như lồn :((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> ve(numCourses);
        vector<int> dem(numCourses, 0);

        for(int i=0 ; i<n ; i++){
            int v = prerequisites[i][0];
            int u = prerequisites[i][1];
            ve[u].push_back(v); // Thêm cạnh từ u đến v
            dem[v]++; // Tăng số lượng môn học trùng nhau của môn học v -_-
        }
        int ans = 0 ;
        queue<int> q;
        for(int i=0 ; i<numCourses ; i++)
            if(dem[i] == 0)  q.push(i); // = 0 tức là môn này ko phụ thuộc vào môn nào cả 

        while(!q.empty()){
            int u = q.front(); q.pop();
            ans++;
            for(int x : ve[u]){
                dem[x]--;
                if(dem[x] == 0) q.push(x);
            }
            
        }
        return ans == numCourses;
        // numcourses là số lượng môn học, ans là số lượng môn học có thể học được.
        //Nếu ans == numCourses thì có thể học hết các môn học
    }
};

int main(){     
        
    vector<vector<int>> prerequisites = {{1,0},{5,1},{3,2}};
    int numCourses = 6;
    Solution sol;
    bool result = sol.canFinish(numCourses, prerequisites);
    cout << (result ? "true" : "false") << endl;
    return 0 ;
}











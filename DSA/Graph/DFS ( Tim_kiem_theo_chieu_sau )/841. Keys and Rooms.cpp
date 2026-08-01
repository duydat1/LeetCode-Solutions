#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = (int)rooms.size();
        int ans = 1;
        vector<int> visited(n , 0);
        stack<int> s;
        for(int i=0 ; i<(int)rooms[0].size() ; i++)
            s.push(rooms[0][i]); // Cho toàn bộ các key ở phòng 0 vào stack 
            
        visited[0] = -1;
        while(!s.empty()){
            int temp = s.top(); s.pop();
            if(visited[temp] != -1){ // <=> !visited[temp] 
                for(int i=0 ; i<(int)rooms[temp].size() ; i++)
                    s.push(rooms[temp][i]);
                visited[temp] = -1;
                ans++;
            }
        }
        return ans == n ;
    }
        
};

int main(){     
        
    vector<vector<int>> v = {{1} , {2} , {1}};
    Solution sol;
    bool res = sol.canVisitAllRooms(v);
    cout << (res ? "true" : "false") << endl;
    return 0 ;
}











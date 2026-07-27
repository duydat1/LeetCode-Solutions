#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> max_pq ;
        sort(courses.begin() , courses.end() , [](auto& a , auto& b){
            return a[1] < b[1];
        });
        int sum = 0;
        
        for(int i=0 ; i<(int)courses.size() ; i++){
            if(!max_pq.empty() && courses[i][1] < courses[i][0] + sum && courses[i][0] < max_pq.top() ){
                sum -= max_pq.top();
                max_pq.pop();
            }
                max_pq.push(courses[i][0]);// lưu thời gian học 
                sum += courses[i][0];
            
        }
        return (int)max_pq.size() ;
    }
};

int main(){
    
    vector<vector<int>> v = {{5,5},{4,6},{2,6}};
    Solution sol;
    cout << sol.scheduleCourse(v) << endl ;
    return 0 ;
}
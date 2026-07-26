#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> dem (26,0);
        for(char x : tasks)
            dem[x - 'A']++; // đổi thành số 
        int max_dem = *max_element(dem.begin() , dem.end()); // tìm số xuất hiện nhiều nhất 
        int count_max_dem = count(dem.begin() , dem.end() , max_dem); // xem có bao nhiêu số cùng max 
        int ans = (max_dem-1)*(n +1) +count_max_dem;
        
        return max(ans , (int)tasks.size()); // = (int)tasks.size() nếu n=0 
    }
};

int main(){
    
    vector<char> v = {'A','A','A','B','B','B'};
    Solution sol;
    int result = sol.leastInterval(v,2);
    cout << result << endl ;
    return 0 ;
}
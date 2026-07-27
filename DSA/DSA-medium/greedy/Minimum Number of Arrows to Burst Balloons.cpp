#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1 ;
        vector<pair<int , int >> p ;
        for(int i=0 ; i<(int)points.size() ; i++)
            p.push_back(make_pair(points[i][0] , points[i][1] ));

        sort(p.begin() , p.end() , [](auto a , auto b){
            return a.second < b.second;
            }); // nếu dùng luôn points để so sánh thì nhanh hơn 1 chút 

        int vi_tri_mui_ten = p[0].second;
        for(int i=0 ; i<(int)points.size() -1 ; i++){
            if(p[i+1].first > vi_tri_mui_ten){
                ans++;
                vi_tri_mui_ten = p[i+1].second;
            }
            // <= thì mũi tên vẫn nằm ở điểm số 2 của phần tử ban đầu , vẫn cứ so sánh tiếp thoai
        }
        return ans ;
    }
};

int main(){
    
    vector<vector<int>> v = {{1,2},{2,3},{3,4},{4,5}};
    Solution sol ;
    int result = sol.findMinArrowShots(v);
    cout << result << endl ;
    return 0 ;
}
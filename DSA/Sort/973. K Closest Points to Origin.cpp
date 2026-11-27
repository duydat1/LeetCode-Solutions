#include<bits/stdc++.h>
using namespace std;

//MEDIUM


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        nth_element(points.begin(), points.begin() + k, points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0]*a[0] + a[1]*a[1] < b[0]*b[0] + b[1]*b[1];
        });
        return vector<vector<int>>(points.begin(), points.begin() + k); 
        // VUA 
    }
};


int main(){     
        
    Solution sol ; 
    vector<vector<int>> points = {{1, 3}, {-2, 2}};
    int k = 1;
    vector<vector<int>> res = sol.kClosest(points , k);
    cout << res[0][0] << " " << res[0][1];
    return 0 ;
}







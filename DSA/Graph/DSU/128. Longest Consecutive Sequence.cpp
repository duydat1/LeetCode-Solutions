#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent;
public:
    int longestConsecutive(vector<int>& nums) {
        int n = (int)nums.size() ;
        parent.resize(n);
        for(int i=0 ; i<n ; i++) parent[i] = i;
        unordered_map<int , int> m ; 
        vector<int> sz ; sz.assign(n , 1); // mảng size lưu kích thước tập hợp

        for(int i=0 ; i<n ; i++){
            if(m.count(nums[i])) continue;
            m[nums[i]] = i; // lấy index 
            if(m.count(nums[i]-1)){
                int root_a = find(m[nums[i]-1]);
                int root_i = find(i);
                if(root_a != root_i){
                    parent[root_a] = root_i;
                    sz[root_i] += sz[root_a];
                }
            }
            if(m.count(nums[i]+1)){
                int root_b = find(m[nums[i]+1]);
                int root_i = find(i);
                if(root_b != root_i){
                    parent[root_b] = root_i;
                    sz[root_i] += sz[root_b];
                }
            }
        }
        int ans =0 ;
        for(int i=0 ; i<n ; i++){
            ans = max(ans , sz[find(i)]); // Duyệt toàn bộ để tìm max size 
        }
        return ans ;
    }

    int find(int i){
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }

};

int main(){     
        
    vector<int> v = {100,4,200,1,3,2} ;
    Solution sol;
    cout << sol.longestConsecutive(v) << endl;
    return 0 ;
}







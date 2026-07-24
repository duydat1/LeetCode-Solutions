#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority_queue<Kiểu_Dữ_Liệu, Container, So_Sánh>
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        unordered_map<int,int> m ; 
        vector<int> ans;
        for(int num : nums)
            m[num]++;
        for(auto [num , count] : m){
            minHeap.push({count , num});
            if(!minHeap.empty() && (int)minHeap.size() > k )
                minHeap.pop();
        }
        while(!minHeap.empty() ){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};

int main(){
    
    vector<int> v = {1,2,1,2,1,2,3,1,3,2};
    Solution sol;
    vector<int> result = sol.topKFrequent(v , 2);

    for(auto x : result )
        cout << x << " ";
    return 0 ;
}
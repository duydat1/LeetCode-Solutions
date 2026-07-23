#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s (nums.begin() , nums.end());
        int longest = 0 ;
        for(int num : s){
            if(s.find(num-1) == s.end()) {// tức là ko có số nào bé hơn nó , vậy nó sẽ là số đầu tiên của dãy 
                int ans = num;
                int dem = 1; 
                while(s.find(ans + 1) != s.end()){
                    ans++ ;
                    dem++;
                }
            longest = max(longest , dem);
            }
        }
        return longest;
    }
};

int main(){
    vector<int> v = {0,3,7,2,5,8,4,6,0,1};
    Solution sol;
    int result = sol.longestConsecutive(v);
    cout << result << endl;
    return 0 ;
}
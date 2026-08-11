#include<bits/stdc++.h>
using namespace std;

// chưa hoàn thành , nản chết đi mất :((((((((((((((
class Solution {
    vector<int> parent ;
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.length();
        for(auto& pair : pairs){
            parent[find(pair[0])] = find(pair[1]);
        }
        unordered_map<int, vector<char>> groups;

        for(int i=0 ; i<n-1 ; i++){
            int root = find(i);
            groups[root].push_back(s[i]);
        }

    }

    int find(int i){
        return parent[i] == i ? i : parent[i] = find(parent[i]);
    }
};

int main(){     
        
    string s = "dcab";
    vector<vector<int>> pairs = {{0,3},{1,2}};
    Solution sol;
    cout << sol.smallestStringWithSwaps(s , pairs) << endl ;
    return 0 ;
}







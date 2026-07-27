#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char , int> um ;
        for(int i=0 ; i<(int)s.size() ; i++){
            um[s[i]] = i; // Lưu các index của các phần tử cuối cùng 
        }
        int max_name = 0 ;
        int start = 0 ;
        vector<int> ans ;
        for(int i=0 ; i<(int)s.size() ; i++){
            max_name = max(max_name , um[s[i]]);
            if(i == max_name){
                ans.push_back(max_name - start + 1 );
                start = i+1;
            }
        }
        return ans;
    }
};

int main(){
    
    string s = "ababcbacadefegdehijhklij";
    Solution sol;
    vector<int> result = sol.partitionLabels(s);
    for(int x : result) 
        cout << x << " "; // Expect: 9 7 8

    return 0 ;
}
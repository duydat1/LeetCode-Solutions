#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> p ; 
        vector<vector<string>> ans;

        for(string &s:strs){
            string key = s ; 
            sort(key.begin() , key.end());
            p.push_back({key,s});
        }
        sort(p.begin() , p.end());

        for(int i=0 ; i<(int)strs.size() ; i++){
            if( i==0 || p[i].first != p[i-1].first){
                ans.push_back({});
            }
            ans.back().push_back(p[i].second);
        }
        return ans ; 
    }
};

int main(){     
        
    
    return 0 ;
}







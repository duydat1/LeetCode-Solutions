#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i , j ; 
        i = j = 0 ;
        
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]) i++;
            j++ ; 
        }
        return i ; 
    }
};

int main(){     
        
    
    return 0 ;
}







#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] != t[i]) return t[i] ; 
        }
        return t.back() ; 
    }
};

int main(){     
        
    
    return 0 ;
}







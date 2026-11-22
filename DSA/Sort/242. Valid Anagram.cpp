#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[26] = {};

        for(char c : s) cnt[c-'a']++;
        for(char c : t) cnt[c-'a']--;
        for(int x : cnt) if(x) return false;
        return true;
    }
};

int main(){     
        
    Solution sol ; 
    string s = "anagram";
    string t = "nagaram";
    cout << sol.isAnagram(s,t) << endl ;
    return 0 ;
}







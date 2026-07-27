#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> cha;
        int n = s.length();
        int left = 0;
        int ans = 0;
        for (int i=0 ; i<n ; i++){
            while(cha.find(s[i]) != cha.end()){
                cha.erase(s[left]);
                left++;
            }
            cha.insert(s[i]);
            ans = max(ans, (int)cha.size());
        }
        return ans;
    }
};



int main(){
    
    string s; cout << "Nhap chuoi s: " ; getline(cin,s);
    //OOP
    Solution sol;
    int anss = sol.lengthOfLongestSubstring(s);
    cout << anss;
    
    
    
    return 0;
}
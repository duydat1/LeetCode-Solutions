#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin() , citations.end() , greater<int>() ); // Sắp xếp giảm dần 
        int ans = 0 ; 

        for(int i=0 ; i<(int)citations.size() ; i++){
            if(citations[i] < i+1) break ; 
            else ans++;
        }
        return ans ; 
    }
};

int main(){     
        
    
    return 0 ;
}







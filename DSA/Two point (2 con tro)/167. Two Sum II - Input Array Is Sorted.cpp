#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans ; 
        int n = numbers.size() ; 
        for (int i=0 ; i<n ; i++){
            int left =i; int right = n-1 ; 
            while(left<right){
                int sum = numbers[left] + numbers[right];
                if(sum > target) right-- ; 
                else if (sum < target) left++ ; 
                else if (sum == target) {
                    ans.insert(ans.end() , {left+1 , right+1});
                    return ans ;
                }
            }
        }
        return ans ;
    }
};

int main(){     
        
    Solution sol ; 
    vector<int> v = {5,25,75};
    vector<int> res = sol.twoSum(v ,100 );
    for(int &x : res) cout << x << "," ; 
    return 0 ;
}







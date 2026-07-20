#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // lưu giá trị index vào stack 
        stack<int> ind;
        ind.push(0);
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i=1 ; i<n ;i++){
            while(!ind.empty() && temperatures[i] > temperatures[ind.top()]){  // [73, 74, 75, 71, 70 , 69 , 68 , 67 , 76 ]
                ans[ind.top()] = (i-ind.top());
                ind.pop();
            }
            ind.push(i);
        }
        return ans;
    }
};


int main(){
    vector<int> v = {73, 74, 75, 71, 69, 72, 76, 73};
    Solution sol;
    vector<int> result = sol.dailyTemperatures(v);
    
    // In kết quả ra màn hình
    cout << "Ket qua so ngay phai cho: " << endl;
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
}
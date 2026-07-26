#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int xang_conlai = 0 ;
        int xang_dadi = 0;
        int start = 0;
        for( int i=0 ; i< (int)gas.size() ; i++){
            int temp_conlai = gas[i] - cost[i] ; // lượng xăng còn - lượng xăng phải sử dụng khi đi từ i->i+1
            xang_conlai += temp_conlai ;
            xang_dadi += temp_conlai ; 
            if(xang_dadi < 0 ){ // bắt đầu từ vị trí này ko thể đi đc hết 1 vòng
                start = i+1 ; // tăng vị trí bắt đầu lên 
                xang_dadi = 0;  // bắt đầu lại từ đầu
            }
        }
        return xang_conlai >= 0 ? start : -1; // xăng còn lại có >=0 ko , có thì return start , ko thì -1
    }
};

int main(){
    vector<int> g= {2,3,4};
    vector<int> c = {3,4,3};
    Solution sol;
    int result = sol.canCompleteCircuit(g,c);
    cout << result << endl;
    return 0 ;
}
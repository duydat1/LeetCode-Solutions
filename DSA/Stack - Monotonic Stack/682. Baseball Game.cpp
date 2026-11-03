#include<bits/stdc++.h>
using namespace std;

//EASY

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st ; 
        for(auto& x : operations){
            if(x == "D") st.push(st.top()*2);
            else if(x == "C") st.pop() ; 
            else if(x == "+"){
                int temp1 = st.top() ; 
                st.pop() ; 
                int temp2 = st.top() ; 
                st.push(temp1);
                st.push(temp1+temp2);
            }

            else{
                st.push(stoi(x)) ;
            }
        }
        if(st.empty()) return 0 ; 
        int sum = 0 ; 
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum ;
    }
};

int main(){     
        

    return 0 ;
}







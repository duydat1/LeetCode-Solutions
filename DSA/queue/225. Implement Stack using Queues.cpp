#include<bits/stdc++.h>
using namespace std;

//EASY 

class MyStack {
    private:
        queue<int> q ; 
    public:
        MyStack() {
            
        }
        
        void push(int x) {
            q.push(x);
        }
        
        int pop() {
            for(int i=0 ; i<(int)q.size()-1 ; i++){
                q.push(q.front());
                q.pop();
            }
            int temp = q.front();
            q.pop();
            return temp ; 
        }
        
        int top() {
            for(int i=0 ; i<(int)q.size()-1; i++){
                q.push(q.front());
                q.pop();
            }
            int temp = q.front();
            q.pop();
            q.push(temp);
            return temp ; 
        }
        
        bool empty() {
            return q.empty() ;
        }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main(){     
        
    
    return 0 ;
}







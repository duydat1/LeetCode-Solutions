#include<bits/stdc++.h>
using namespace std;

//EASY

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int steps = (getsize(head))/2; // Số bước di chuyển 
        ListNode *curr = head ; 
        for(int i=0 ; i<steps ; i++) curr = curr->next;
        return curr;
    }

    int getsize(ListNode *head){
        ListNode *curr = head;
        int count = 0 ;
        while(curr != nullptr){
            count++ ; 
            curr = curr->next;
        }
        return count;
    }
};

int main(){     
        
    
    return 0 ;
}







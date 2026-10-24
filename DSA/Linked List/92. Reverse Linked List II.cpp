#include<bits/stdc++.h>
using namespace std;

//MEDIUm

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head ; 
        ListNode dummy(0) ; 
        dummy.next = head ; 
        ListNode* prev = &dummy ; 

        for(int i=0 ; i< left-1 ; i++) prev = prev->next ;

        ListNode* curr = prev->next ; 

        for(int i=0 ; i< right-left ; i++ ){
            ListNode* nextt = curr->next;
            curr->next = nextt->next ;
            nextt->next = prev->next ; 
            prev->next = nextt ; 
        }
        return dummy.next ;
    }
};

int main(){     
        
    
    return 0 ;
}







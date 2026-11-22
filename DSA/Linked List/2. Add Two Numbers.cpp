#include<bits/stdc++.h>
using namespace std;

//MEDIUM 

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0) ;
        ListNode* p = &dummy ;
        int hang_chuc = 0 ;
        while(l1 != nullptr || l2 != nullptr || hang_chuc != 0){
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x+y+hang_chuc ;

            hang_chuc = sum / 10 ; 
            p->next = new ListNode(sum%10);
            p = p->next ;
            if(l1) l1 = l1->next ; 
            if(l2) l2 = l2->next ; 
        }
        return dummy.next ; 
    }
};

int main(){
        
    
    return 0 ;
}







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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* head = &dummy;

        while(list1 && list2){ // Cả 2 đều khác null 
            if (list1->val < list2->val){
                head->next = list1;
                list1 = list1->next;
            }
            else if (list1->val >= list2->val){
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next ; 
        }
        if(list1) head->next = list1;
        else head->next = list2;

        return dummy.next ; 
    }
};

int main(){     
        
    
    return 0 ;
}







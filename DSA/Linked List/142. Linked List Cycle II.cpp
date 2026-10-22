#include<bits/stdc++.h>
using namespace std;

//MEDIUM

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return {} ; 
        ListNode *slow = head ; 
        ListNode *flat = head ;

        while(flat != nullptr && flat->next != nullptr) { // flat != nullptr <=> flat 
            slow = slow->next;
            flat = flat->next->next;
            if ( flat == slow){
                slow = head ; 
                while(slow != flat){
                    slow = slow->next;
                    flat = flat->next;
                }
                return slow ;
            }
        }
        return nullptr;
    }
};

int main(){     
        
    // Ví dụ tạo linked list có vòng:
    // 3 -> 2 -> 0 -> -4
    //           ^     |
    //           |_____|
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(0);
    ListNode* n4 = new ListNode(-4);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2; // tạo vòng nối về node 2

    Solution sol;
    ListNode* cycleStart = sol.detectCycle(n1);

    if (cycleStart) cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    else cout << "No cycle detected" << endl;
    return 0 ;
}







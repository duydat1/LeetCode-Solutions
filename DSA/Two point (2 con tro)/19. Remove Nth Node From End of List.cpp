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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head); // Khởi tạo 2 biến ở trước cả head 
        ListNode *slow = &dummy;
        ListNode *fast = &dummy;
        for(int i=0 ; i<n+1 ; i++) fast = fast->next; // Đưa fast tiến đến n+1

        while (fast != nullptr){
            slow = slow->next;
            fast = fast->next;
        } // Sau đó cả 2 cùng tiến , sau khi fast đến hết thì slow đang nằm trước số cần xóa 1 đơn vị 

        slow->next = slow->next->next; // Cắt next của cần xóa 
        return dummy.next;
    }
};

int main(){     
        
    
    return 0 ;
}







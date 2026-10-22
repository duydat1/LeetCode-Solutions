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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr, *curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;// Gắn vào temp để lưu dấu giá trị tiếp theo 
            curr->next = prev; // Đảo chiều con trỏ , bẻ next (hiện tại đang từ node 1 next node 2 )
            // thì bẻ next vào prev (tức là NULL )
            prev = curr; // 2 dòng này chỉ đang ++ để xử lý node tiếp theo thui 
            curr = nextTemp;
        }
        return prev; // prev chính là 'end' cũ, giờ thành 'head' mới
    }
    
};

int main(){     
        
    
    return 0 ;
}







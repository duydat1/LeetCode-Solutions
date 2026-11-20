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
    bool isPalindrome(ListNode* head) {
        ListNode* prev = nullptr; 
        ListNode* slow = head; 
        ListNode* fast = head ; 

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next ; 
            ListNode* nextNode = slow->next ; // Lưu đỉnh tiếp theo của slow
            slow->next = prev ; // Nối slow vào null để tách liên kết làm 2 phần 
            prev = slow ; // đẩy prev lên 1 node
            slow = nextNode ; // Đẩy slow lên 1 nút đẻ tiếp tục duyệt 
        }
        if(fast != nullptr) slow = slow->next ; // Đỉnh lẻ  , đẩy slow thêm 1 node để bỏ qua đỉnh giưa 

        // Liên kết bị tách làm 2 phần , slow và prev là 2 head 
        while(prev != nullptr && slow != nullptr){
            if(prev->val != slow->val) return false;
            prev = prev->next ;
            slow = slow->next ;
        }
        return true ; 
    }
};

int main(){     
        
    
    return 0 ;
}







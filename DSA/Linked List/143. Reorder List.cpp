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
    void reorderList(ListNode* head) {
        ListNode *curr = head ; 

        int mid = getsize(head) ; 
        if (!head || !head->next) return;
        if(mid%2 == 0 ) mid= mid/2 ; else mid=mid/2+1;

        for(int i=0 ; i<mid-1 ; i++ ) curr = curr->next ; 

        ListNode* midtoSecond = nullptr ; 
        if(curr && curr->next){
            ListNode* temp = curr->next; // Nối nửa sau vào 1 ds mới 
            curr->next = nullptr ; // Cắt đứt liên kết 
            midtoSecond = reverse(temp); // Đảo ngược và gắn vào 1 ds mới 
        }

        ListNode* first = head ; 
        ListNode* second = midtoSecond ; 
        while(second){
            ListNode* nextFirst = first->next ; 
            ListNode* nextSecond = second->next ; 
            // Nối 2 danh sách 
            first->next = second ; 
            second->next = nextFirst ; 
            // Đẩy lên giá trị tiếp theo 
            first = nextFirst;
            second = nextSecond;

        }

    }

    ListNode* reverse (ListNode* head){
        ListNode* prev = nullptr , *curr = head ; 
        while(curr){
            ListNode* nexttemp = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = nexttemp;
        }
        return prev ; 
    }

    int getsize(ListNode *head){
        int cnt = 0 ; 
        ListNode *temp = head ; 
        while(temp != nullptr){
            cnt++ ;
            temp = temp->next ; 
        }
        return cnt ; 
    }
};

int main(){     
        
    
    return 0 ;
}







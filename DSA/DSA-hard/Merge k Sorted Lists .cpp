#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// đcu đéo biết viết struct -_- 
// bài này vẫn chưa làm đc :(((
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int , ListNode*>  , vector<pair<int,ListNode*>> , greater<pair<int , ListNode*>>> pq ; 
        vector<int> ans;
        for(auto node : lists)
            if(node)
                pq.push({node->val , node});

        ListNode dummy(0);
        ListNode* tail = &dummy;

        // 2. Rút ra và nối pointer
        while (!pq.empty()) {
            auto [val, currNode] = pq.top(); 
            pq.pop();

            tail->next = currNode;
            tail = tail->next;

            // Nếu node này còn node đằng sau -> đẩy node sau vào Heap
            if (currNode->next) {
                pq.push({currNode->next->val, currNode->next});
            }
        }
    }
};

int main(){
    
    return 0 ;
}
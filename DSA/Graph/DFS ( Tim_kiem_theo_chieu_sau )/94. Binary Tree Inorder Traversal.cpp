#include <vector>
#include <iostream>

using namespace std;

//EASY 

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
    vector<int> ans ;
    public:
        vector<int> inorderTraversal(TreeNode* root) {
            dfs(root);
            return ans ;
        }
        
        void dfs(TreeNode* root){
            if(!root) return ; 

            dfs(root->left);
            ans.push_back(root->val) ;
            dfs(root->right);
        }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution s;

    vector<int> ans = s.inorderTraversal(root);

    for(int x : ans)
        cout << x << " ";

    return 0;
}







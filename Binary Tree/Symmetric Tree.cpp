/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool dfs(TreeNode* l, TreeNode* r){
        if(l==NULL && r==NULL) return 1;
        if(l!=NULL && r==NULL) return 0;
        if(l==NULL && r!=NULL) return 0;

        bool left = dfs(l->left,r->right);
        bool right = dfs(l->right,r->left);
        bool value = (l->val == r->val);

        return (left && right && value);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left,root->right);
    }
};

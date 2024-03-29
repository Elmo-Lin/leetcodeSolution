/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(!root){
            return nullptr;
        }
        if(root->val>p->val){
            return inorderSuccessor(root->left, p) ? inorderSuccessor(root->left, p) : root;
        }else{
            return inorderSuccessor(root->right, p);
        }
    }
};
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
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot){
            return true;
        }
        if(!root && subRoot || root && !subRoot){
            return false;
        }
        return isSame(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    bool isSame(TreeNode* s, TreeNode* t) {
        if(!s && !t){
            return true;
        }
        if(!s && t || s && !t){
            return false;
        }
        return (s->val==t->val) && isSame(s->left, t->left) && isSame(s->right,  t->right);
    }
};
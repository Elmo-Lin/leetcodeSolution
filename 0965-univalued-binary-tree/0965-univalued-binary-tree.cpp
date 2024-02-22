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
    bool isUnivalTree(TreeNode* root) {
        set<int> s;
        inorder(root, s);
        return s.size()==1;
    }
    void inorder(TreeNode* root, set<int>& s){
        if(!root){
            return;
        }
        inorder(root->left, s);
        s.insert(root->val);
        inorder(root->right, s);
    }
};
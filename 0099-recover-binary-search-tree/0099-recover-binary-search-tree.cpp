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
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> ptr;
        vector<int> res;
        inorder(root, ptr, res);
        sort(res.begin(), res.end());
        for(int i=0; i<ptr.size(); i++){
            ptr[i]->val=res[i];
        }
        return;
    }
    void inorder(TreeNode* root, vector<TreeNode*>& ptr, vector<int>& res){
        if(!root){
            return;
        }
        inorder(root->left, ptr, res);
        ptr.push_back(root);
        res.push_back(root->val);
        inorder(root->right, ptr, res);
    }
};
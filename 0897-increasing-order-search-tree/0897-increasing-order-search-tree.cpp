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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        TreeNode* dummy=new TreeNode(0);
        TreeNode* cur=dummy;
        for(int i=0; i<res.size(); i++){
            cur->right=new TreeNode(res[i]);
            cur=cur->right;
        }
        return dummy->right;
    }
    void helper(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }
        helper(root->left, res);
        res.push_back(root->val);
        helper(root->right, res);
    }
};
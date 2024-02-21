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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return helper(res, 0, res.size()-1);
    }
    void inorder(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    TreeNode* helper(vector<int> res, int left, int right){
        if(left>right){
            return nullptr;
        }
        int mid=left+(right-left)/2;
        TreeNode* node=new TreeNode(res[mid]);
        node->left=helper(res, left, mid-1);
        node->right=helper(res, mid+1, right);
        return node;
    }
};
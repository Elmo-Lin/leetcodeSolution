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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> res;
        inorder(root, res, low, high);
        int sum=0;
        sum=accumulate(res.begin(), res.end(), 0);
        return sum;
    }
    void inorder(TreeNode* root, vector<int>& res, int low, int high){
        if(!root){
            return;
        }
        inorder(root->left, res, low, high);
        if(root->val>=low && root->val<=high){
            res.push_back(root->val);
        }
        inorder(root->right, res, low, high);
    }
};
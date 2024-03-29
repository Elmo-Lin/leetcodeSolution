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
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> cur;
        dfs(root, targetSum, cur, res);
        return res.size()!=0;
    }
    void dfs(TreeNode* root, int targetSum, vector<int> cur, vector<vector<int>>& res){
        if(!root){
            return;
        }
        cur.push_back(root->val);
        if(targetSum==root->val && !root->left && !root->right){
            res.push_back(cur);
        }
        dfs(root->left, targetSum-root->val, cur, res);
        dfs(root->right, targetSum-root->val, cur, res);
        cur.pop_back();
    }
};
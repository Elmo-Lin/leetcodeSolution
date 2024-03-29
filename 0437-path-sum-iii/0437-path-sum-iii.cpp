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
    int pathSum(TreeNode* root, int targetSum) {
        int res=0;
        vector<int> cur;
        dfs(root, targetSum, cur, res);
        return res;
    }
    void dfs(TreeNode* root, int targetSum, vector<int>& cur, int& res){
        if(!root){
            return;
        }
        cur.push_back(root->val);
        long long curSum=0;
        for(int i=cur.size()-1; i>=0; i--){
            curSum+=cur[i];
            if(curSum==targetSum){
                res++;
            }
        }
        dfs(root->left, targetSum, cur, res);
        dfs(root->right, targetSum, cur, res);
        cur.pop_back();
    }
};

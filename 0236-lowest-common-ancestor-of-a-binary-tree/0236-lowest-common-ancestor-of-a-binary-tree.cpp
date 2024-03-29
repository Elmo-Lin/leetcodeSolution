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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res=nullptr;
        dfs(root, p, q, res);
        return res;
    }
    int dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& res){
        if(!root){
            return 0;
        }
        int left=dfs(root->left, p, q, res);
        int right=dfs(root->right, p, q, res);
        int self=(root==p || root==q);
        int count=self+left+right;
        if(count==2 && res==nullptr){
            res=root;
        }
        return count;
    }
};
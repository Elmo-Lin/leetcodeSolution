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
    TreeNode* res=nullptr;
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, p, q);
        return res;
    }
    int dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root){        
            return 0;
        }
        int left=dfs(root->left, p, q);
        int right=dfs(root->right, p, q);
        int self=(root==p || root==q);
        int count=self+left+right;
        if(count==2 && res==nullptr){
            res=root;
        }
        return count;
    }
};
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
    int count;
    int averageOfSubtree(TreeNode* root) {
        count=0;
        dfs(root);
        return count;
    }
    vector<int> dfs(TreeNode* root){
        if(!root){
            return {0, 0};
        }
        vector<int> l=dfs(root->left);
        vector<int> r=dfs(root->right);
        int sum=l[0]+r[0]+root->val;
        int num=l[1]+r[1]+1;
        
        if(sum/num==root->val){
            count++;
        }
        
        return {sum, num};
    }
};
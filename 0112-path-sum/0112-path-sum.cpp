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
        if(!root){
            return false;
        }
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            int size=q.size();
            for(int i=0; i<size; i++){
                TreeNode* cur=q.front();
                q.pop();
                if(!cur->left && !cur->right && cur->val==targetSum){
                    return true;
                }
                if(cur->left){
                    cur->left->val+=cur->val;
                    q.push(cur->left);
                }
                if(cur->right){
                    cur->right->val+=cur->val;
                    q.push(cur->right);
                }
            }
        }
        return false;
    }
};
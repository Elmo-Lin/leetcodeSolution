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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int diff=depth(root->left)-depth(root->right);
        if(diff==0){
            return root;
        }else{
            if(diff>0){
                return lcaDeepestLeaves(root->left);
            }else{
                return lcaDeepestLeaves(root->right);
            }
        }
    }
    int depth(TreeNode* root){
        if(!root){
            return 0;
        }else{
            return max(depth(root->left), depth(root->right))+1;
        }
    }
};
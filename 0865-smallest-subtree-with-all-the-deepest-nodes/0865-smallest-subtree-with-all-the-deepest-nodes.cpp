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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int diff=depth(root->left)-depth(root->right);
        if(diff==0){
            return root;
        }else{
            if(diff>0){
                return subtreeWithAllDeepest(root->left);
            }else{
                return subtreeWithAllDeepest(root->right);
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
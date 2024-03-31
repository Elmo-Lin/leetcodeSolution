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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int left=getDepth(root->left);
        int right=getDepth(root->right);
        
        int leftMax=diameterOfBinaryTree(root->left);
        int rightMax=diameterOfBinaryTree(root->right);
        
        return max(left+right, max(leftMax, rightMax));
    }
    int getDepth(TreeNode* root){
        if(!root){
            return 0;
        }
        return max(getDepth(root->left), getDepth(root->right))+1;
    }
};
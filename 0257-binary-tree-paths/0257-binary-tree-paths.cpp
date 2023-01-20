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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        string track="";
        backtrack(root, track);
        return res;
    }
    void backtrack(TreeNode* root, string track){
        if(root->left==NULL && root->right==NULL){
            res.push_back(track+to_string(root->val));
        }
        if(root->left){
            backtrack(root->left, track+to_string(root->val)+"->");
        }
        if(root->right){
            backtrack(root->right, track+to_string(root->val)+"->");
        }
    }
};
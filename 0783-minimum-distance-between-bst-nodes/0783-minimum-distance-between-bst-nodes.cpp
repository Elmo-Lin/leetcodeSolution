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
    int minDiffInBST(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        int min=res[1]-res[0];
        for(int i=1; i<res.size()-1; i++){
            if(res[i+1]-res[i]<min){
                min=res[i+1]-res[i];
            }
        }
        return min;
    }
    void inorder(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
};
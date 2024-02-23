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
    int findSecondMinimumValue(TreeNode* root) {
        set<int> res;
        inorder(root, res);
        int count=0;
        for(auto it : res){
            if(count==1){
                return it;
            }
            count++;
        }
        return -1;    
    }
    void inorder(TreeNode* root, set<int>& res){
        if(!root){
            return;
        }
        inorder(root->left, res);
        res.insert(root->val);
        inorder(root->right, res);
    }
};
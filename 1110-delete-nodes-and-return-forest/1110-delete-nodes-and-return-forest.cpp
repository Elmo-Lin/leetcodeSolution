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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        unordered_set<int> st(to_delete.begin(), to_delete.end());
        helper(root, true, st, res);
        return res;
    }
    TreeNode* helper(TreeNode* root, bool is_root, unordered_set<int>& st, vector<TreeNode*>& res){
        if(!root){
            return nullptr;
        }
        bool deleted=st.count(root->val);
        if(is_root && !deleted){
            res.push_back(root);
        }
        root->left=helper(root->left, deleted, st, res);
        root->right=helper(root->right, deleted, st, res);
        if(deleted){
            return nullptr;
        }else{
            return root;
        }
    }
};
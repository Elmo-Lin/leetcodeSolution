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
    TreeNode* helper(TreeNode* node, bool is_root, unordered_set<int>& st, vector<TreeNode*>& res) {
        if(!node){
            return nullptr;
        }
        bool deleted=st.count(node->val);
        if(is_root && !deleted){
            res.push_back(node);
        }
        node->left=helper(node->left, deleted, st, res);
        node->right=helper(node->right, deleted, st, res);
        if(deleted){
            return nullptr;
        }else{
            return node;
        }
    }
};
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
    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int> res;
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
            for(int i=0; i<size; i++){
                TreeNode* cur=q.front();
                q.pop();
                temp.push_back(cur->val);
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            res.push_back(temp.back());
        }
        return res;
    }
};
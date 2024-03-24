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
    int widthOfBinaryTree(TreeNode* root) {
        long long res=1;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0}); 
        while(!q.empty()){
            long long size=q.size();
            long long start=q.front().second;
            long long end=q.back().second;
            res=max(res, end-start+1);
            
            for(int i=0; i<size; i++){
                pair<TreeNode*, int> p=q.front();
                long long idx=p.second-start;
                q.pop();
                
                if(p.first->left){
                    q.push({p.first->left, (long long)2*idx+1});
                }
                if(p.first->right){
                    q.push({p.first->right, (long long) 2*idx+2});
                }
            }
        }
        return res;
    }
};
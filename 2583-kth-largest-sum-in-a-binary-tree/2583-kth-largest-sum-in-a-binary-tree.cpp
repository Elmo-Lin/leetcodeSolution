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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;
        queue<TreeNode*> q{{root}};
        int level=0;
        while(!q.empty()){
            level++;
            int size=q.size();
            long long temp=0;
            for(int i=0; i<size; i++){
                auto cur=q.front();
                q.pop();
                temp+=cur->val;
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            res.push_back(temp);
        }
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());
        if(level<k){
            return -1;
        }
        return res[k-1];
    }
};
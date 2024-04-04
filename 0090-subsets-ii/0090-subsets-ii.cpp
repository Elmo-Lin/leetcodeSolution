class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(nums.begin(), nums.end());
        dfs(nums, 0, cur, res);
        return res;
    }
    void dfs(vector<int>& nums, int pos, vector<int> cur, vector<vector<int>>& res){
        res.push_back(cur);
        for(int i=pos; i<nums.size(); i++){
            if(i>pos && nums[i]==nums[i-1]){
                continue;
            }
            cur.push_back(nums[i]);
            dfs(nums, i+1, cur, res);
            cur.pop_back();
        }
    }
};
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        vector<bool> visited(nums.size(), false);
        sort(nums.begin(), nums.end());
        dfs(nums, 0, visited, cur, res);
        return res;
    }
    void dfs(vector<int>& nums, int level, vector<bool>& visited, vector<int> cur, vector<vector<int>>& res){
        if(level==nums.size()){
            res.push_back(cur);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(visited[i]==true){
                continue;
            }
            if(i>0 && nums[i]==nums[i-1] && visited[i-1]==false){
                continue;
            }
            visited[i]=true;
            cur.push_back(nums[i]);
            dfs(nums, level+1, visited, cur, res);
            cur.pop_back();
            visited[i]=false;
        }
    }
};
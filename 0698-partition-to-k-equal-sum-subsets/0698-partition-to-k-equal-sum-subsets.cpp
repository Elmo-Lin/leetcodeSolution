class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total=accumulate(nums.begin(), nums.end(), 0);
        if(total%k!=0){
            return false;
        }
        vector<bool> visited(nums.size(), false);
        sort(nums.rbegin(), nums.rend());
        if(nums[0]>total/k){
            return false;
        }
        return dfs(nums, k, 0, 0, 0, total/k, visited);
    }
    bool dfs(vector<int>& nums, int k, int start, int group, int curSum, int target, vector<bool>& visited){
        if(group==k){
            return true;
        }
        if(curSum>target){
            return false;
        }
        if(curSum==target){
            return dfs(nums, k, 0, group+1, 0, target, visited);
        }
        for(int i=start; i<nums.size(); i++){
            if(visited[i]){
                continue;
            }
            visited[i]=true;
            if(dfs(nums, k, i+1, group, curSum+nums[i], target, visited)){
                return true;
            }
            visited[i]=false;
        }
        return false;
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0], nums[1]);
        }
        int res1=helper(nums, 0, nums.size()-2);
        int res2=helper(nums, 1, nums.size()-1);
        return max(res1, res2);
    }
    int helper(vector<int> nums, int start, int end){
        if(start==end){
            return nums[start];
        }
        if(end-start==1){
            return max(nums[start], nums[end]);
        }
        vector<int> dp(end-start+1);
        dp[0]=nums[start];
        dp[1]=max(nums[start], nums[start+1]);
        for(int i=2; i<dp.size(); i++){
            dp[i]=max(dp[i-1], nums[start+i]+dp[i-2]);
        }
        return dp[dp.size()-1];
    }
};
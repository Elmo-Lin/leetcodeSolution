class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        dp[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            dp[i]=max(nums[i], nums[i]+dp[i-1]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};
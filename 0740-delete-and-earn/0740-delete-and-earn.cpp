class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int>m;
        int max_value=*max_element(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]+=nums[i];
        }
        
        vector<int> dp(max_value+1, 0);
        dp[1]=m[1];
        for(int i=2; i<=max_value; i++){
            dp[i]=max(dp[i-1], dp[i-2]+m[i]);
        }
        
        return dp[max_value];
    }
};
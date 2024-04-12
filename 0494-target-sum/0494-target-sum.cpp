class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int num : nums){
            sum+=num;
        }
        if(target<-sum || target>sum){
            return 0;
        }
        vector<int> dp(2*sum+1);
        dp[nums[0]+sum]=1;
        dp[-nums[0]+sum]+=1;
        
        for(int i=1; i<nums.size(); i++){
            vector<int> temp(2*sum+1);
            for(int s=0; s<=2*sum; s++){
                if(dp[s]){
                    temp[s+nums[i]]+=dp[s];
                    temp[s-nums[i]]+=dp[s];
                }
            }
            dp=temp;
        }
        return dp[target+sum];
    }
};
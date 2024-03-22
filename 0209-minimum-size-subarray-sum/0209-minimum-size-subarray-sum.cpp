class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int curSum=0;
        int count=INT_MAX;
        int left=0;
        for(int i=0; i<nums.size(); i++){
            curSum+=nums[i];
            while(curSum>=target){
                count=min(count, i-left+1);
                curSum-=nums[left];
                left++;
            }
        }
        
        return count==INT_MAX ? 0 : count;
    }
};
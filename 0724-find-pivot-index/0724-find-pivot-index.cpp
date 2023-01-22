class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int cur=0;
        int sum=accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<nums.size(); i++){
            if(cur*2==sum-nums[i]){
                return i;
            }
            cur+=nums[i];
        }
        return -1;
    }
};
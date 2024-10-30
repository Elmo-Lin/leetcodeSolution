class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long pre=nums[0];
        int res=nums[0];
        for(int i=1; i<nums.size(); i++){
            pre+=nums[i];
            res=max(res, (int)((pre+i)/(i+1)));
        }
        return res;
    }
};
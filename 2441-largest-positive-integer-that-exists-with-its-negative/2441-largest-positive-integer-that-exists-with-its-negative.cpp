class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int mx=-1;
        unordered_map<int, int> m;
        for(int num : nums){
            m[num]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0 && m[-nums[i]]>0 && nums[i]>mx){
                mx=nums[i];
            }
        }
        return mx;
    }
};
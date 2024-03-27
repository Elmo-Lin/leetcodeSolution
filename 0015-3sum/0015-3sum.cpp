class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int k=0; k<nums.size()-2; k++){
            if(nums[k]>0){
                break;
            }
            if(k>0 && nums[k]==nums[k-1]){
                continue;
            }
            int target=0-nums[k];
            int i=k+1;
            int j=nums.size()-1;
            while(i<j){
                if(target==nums[i]+nums[j]){
                    res.push_back({nums[k], nums[i], nums[j]});
                    while(i<j && nums[i]==nums[i+1]){
                        i++;
                    }
                    while(i<j && nums[j]==nums[j-1]){
                        j--;
                    }
                    i++;
                    j--;
                }else if(target>nums[i]+nums[j]){
                    i++;
                }else{
                    j--;
                }
            }
        }
        return res;
    }
};
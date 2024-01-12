class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int prod=1;
        for(int i=1; i<nums.size(); i++){
            prod=prod*nums[i-1];
            res[i]=prod;
        }
        prod=1;
        for(int i=nums.size()-2; i>=0; i--){
            prod=prod*nums[i+1];
            res[i]=res[i]*prod;
        }
        return res;
    }
};
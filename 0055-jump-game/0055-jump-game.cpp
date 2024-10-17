class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reach=0;
        for(int i=0; i<nums.size(); i++){
            if(i>reach || reach>=n-1){
                break;
            }
            reach=max(reach, i+nums[i]);
        }
        return reach>=n-1;
    }
};
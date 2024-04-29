class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int cur=0;
        while(cur<=right){
            if(nums[cur]==0){
                swap(nums[cur], nums[left]);
                left++;
                cur++;
            }else if(nums[cur]==2){
                swap(nums[cur], nums[right]);
                right--;
            }else{
                cur++;
            }
        }
    }
};
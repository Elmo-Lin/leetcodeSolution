class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    right=mid;
                }else{
                    left=mid;
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    left=mid;
                }else{
                    right=mid;
                }
            }
        }
        if(left==0){
            return nums[0];
        }
        return nums[nums.size()-1];
    }
};
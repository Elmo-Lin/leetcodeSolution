class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int left=0;
        int right=nums.size()-1;
        int index=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>=target){
                right=mid-1;
            }else{
                left=mid+1;
            }
            if(nums[mid]==target){
                index=mid;
            }
        }
        res.push_back(index);
        
        left=0;
        right=nums.size()-1;
        index=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<=target){
                left=mid+1;
            }else{
                right=mid-1;
            }
            if(nums[mid]==target){
                index=mid;
            }
        }
        res.push_back(index);
        
        return res;
    }
};
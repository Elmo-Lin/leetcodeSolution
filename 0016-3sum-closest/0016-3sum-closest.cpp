class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        int diff=abs(closest-target);
        for(int i=0; i<n-2; i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int cur=nums[i]+nums[left]+nums[right];
                if(abs(cur-target)<diff){
                    closest=cur;
                    diff=abs(cur-target);
                }
                if(cur<target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return closest;
    }
};
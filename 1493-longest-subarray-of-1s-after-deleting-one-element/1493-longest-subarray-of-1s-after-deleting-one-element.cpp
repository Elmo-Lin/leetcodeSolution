class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int max=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                count++;
            }
            while(count==2){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            if(j-i>max){
                max=j-i;
            }
            j++;
        }
        return max;
    }
};
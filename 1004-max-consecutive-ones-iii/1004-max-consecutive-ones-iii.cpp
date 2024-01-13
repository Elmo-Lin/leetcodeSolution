class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int max=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                count++;
            }
            while(count==k+1){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            if(j-i+1>max){
                max=j-i+1;
            }
            j++;
        }
        return max;
    }
};
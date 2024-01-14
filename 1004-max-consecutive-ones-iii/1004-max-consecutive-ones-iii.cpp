class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        int j=0;
        int res=0;
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
            res=max(res, j-i+1);
            j++;
        }
        return res;
    }
};
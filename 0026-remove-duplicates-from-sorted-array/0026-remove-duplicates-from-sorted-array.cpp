class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(i==0 || nums[i-1]!=nums[j]){
                nums[i]=nums[j];
                i++;
                j++;
            }else{
                j++;
            }
        }
        return i;
    }
};
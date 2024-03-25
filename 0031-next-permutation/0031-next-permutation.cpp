class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i, j;
        for(i=n-2; i>=0; i--){
            if(nums[i+1]>nums[i]){
                for(j=n-1; j>i; j--){
                    if(nums[j]>nums[i]){
                        break;
                    }
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin()+i+1, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};


//   i     j
// 1 2 7 4 3 1
// 1 3 7 4 2 1
// 1 3 1 2 4 7
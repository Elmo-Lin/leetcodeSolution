class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int res=0;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
            while(count==2){
                if(nums[j]==0){
                    count--;
                }
                j++;
            }
            res=max(res, i-j);
        }
        return res;
    }
};


//   j
//             i
//[0,1,1,1,0,1,1,0,1]
class Solution {
public:
    int jump(vector<int>& nums) {
        int res=0;
        int curEnd=0;
        int curFarthest=0;
        for(int i=0; i<nums.size()-1; i++){
            curFarthest=max(curFarthest, nums[i]+i);
            if(i==curEnd){
                curEnd=curFarthest;
                res++;
            }
        }
        return res;
    }
};

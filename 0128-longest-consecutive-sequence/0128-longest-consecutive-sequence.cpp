class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        set<int> s(nums.begin(), nums.end());
        for(int val : nums){
            int pre=val-1;
            int next=val+1;
            while(s.count(pre)){
                s.erase(pre);
                pre--;
            }
            while(s.count(next)){
                s.erase(next);
                next++;
            }
            res=max(res, next-pre-1);
        }
        return res;
    }
};
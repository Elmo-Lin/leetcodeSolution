class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int c : nums){
            m[c]++;
        }
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]]>0){
                m[nums[i]]--;
                count+=m[nums[i]];
            }
        }
        return count;
    }
};
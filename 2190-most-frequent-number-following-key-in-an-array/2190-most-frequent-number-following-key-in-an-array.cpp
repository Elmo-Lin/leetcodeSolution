class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==key){
                m[nums[i+1]]++;
            }
        }
        int res=0;
        int count=0;
        for(auto it : m){
            if(it.second>count){
                count=it.second;
                res=it.first;
            }
        }
        return res;
    }
};
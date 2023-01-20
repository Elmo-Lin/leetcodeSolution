class Solution {
public:
    vector<vector<int>> res;
    int subsetXORSum(vector<int>& nums) {
        vector<int> track;
        backtrack(nums, 0, track);
        
        int sum=0;
        for(int i=0; i<res.size(); i++){
            int temp=0;
            for(int j=0; j<res[i].size(); j++){
                temp^=res[i][j];
            }
            sum+=temp;
        }
        return sum;
    }
    void backtrack(vector<int>& nums, int start, vector<int>& track){
        res.push_back(track);
        for(int i=start; i<nums.size(); i++){
            track.push_back(nums[i]);
            backtrack(nums, i+1, track);
            track.pop_back();
        }
    }
};
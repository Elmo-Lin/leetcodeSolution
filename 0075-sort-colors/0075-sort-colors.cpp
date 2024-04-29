class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> color(3);
        for(int i=0; i<nums.size(); i++){
            color[nums[i]]++;
        }
        int cur=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<color[i]; j++){
                nums[cur]=i;
                cur++;
            }
        }
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colors(3);
        for(int num : nums){
            colors[num]++;
        }
        int cur=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<colors[i]; j++){
                nums[cur]=i;
                cur++;
            }
        }
    }
};
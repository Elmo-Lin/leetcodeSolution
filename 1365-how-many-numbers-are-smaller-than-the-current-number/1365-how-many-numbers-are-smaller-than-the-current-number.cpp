class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> arr=nums;
        sort(arr.begin(), arr.end());
        for(int i=arr.size()-1; i>=0; i--){
            m[arr[i]]=i;
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i]=m[nums[i]];
        }
        return nums;
    }
};
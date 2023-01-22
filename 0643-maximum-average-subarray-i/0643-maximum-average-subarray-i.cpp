class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int mx=INT_MIN;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        mx=sum;
        for(int i=0; i<nums.size()-k; i++){
            sum=sum-nums[i]+nums[i+k];
            mx=max(mx, sum);
        }
        return (double)mx/k;
    }
};
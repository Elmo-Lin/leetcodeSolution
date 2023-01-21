class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int c : nums){
            m[c]++;
        }
        int sum=0;
        for(int c : nums){
            if(m[c]==1){
                sum+=c;
            }
        }
        return sum;
    }
};
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int c : nums){
            m[c]++;
        }
        for(int c : nums){
            if(m[c]%2==1){
                return false;
            }
        }
        return true;
    }
};
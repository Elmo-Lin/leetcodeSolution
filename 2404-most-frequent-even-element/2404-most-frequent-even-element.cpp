class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> m;
        for(int c : nums){
            m[c]++;
        }
        int res=-1;
        int freq=0;
        for(auto it : m){
            if(it.first%2==0 && it.second>freq){
                freq=it.second;
                res=it.first;
            }
        }
        return res;
    }
};
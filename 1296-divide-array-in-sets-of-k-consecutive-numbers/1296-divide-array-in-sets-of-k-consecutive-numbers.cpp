class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int, int> m;
        for(int num : nums){
            m[num]++;
        }
        for(auto it : m){
            if(it.second==0){
                continue;
            }
            for(int i=it.first; i<it.first+k; i++){
                if(it.second>m[i]){
                    return false;
                }
                m[i]-=it.second;
            }
        }
        return true;
    }
};
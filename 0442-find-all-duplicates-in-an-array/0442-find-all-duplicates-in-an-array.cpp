class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> m;
        for(int c : nums){
            m[c]++;
        }
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second!=1){
                res.push_back(it->first);
            }
        }
        return res;
    }
};
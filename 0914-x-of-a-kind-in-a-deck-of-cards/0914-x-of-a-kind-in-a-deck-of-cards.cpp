class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> m;
        for(int c : deck){
            m[c]++;
        }
        int res=0;
        for(auto it : m){
            res=gcd(res, it.second);
        }
        return res>1;
    }
};
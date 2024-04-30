class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> m;
        unordered_map<char, int> n;
        for(int i=0; i<s.size(); i++){
            if(m[s[i]]!=n[t[i]]){
                return false;
            }
            m[s[i]]=i+1;
            n[t[i]]=i+1;
        }
        return true;
    }
};
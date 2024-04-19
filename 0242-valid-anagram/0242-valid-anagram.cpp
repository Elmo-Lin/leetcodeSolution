class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            m[t[i]]--;
            if(m[t[i]]<0){
                return false;
            }
        }
        return true;
    }
};
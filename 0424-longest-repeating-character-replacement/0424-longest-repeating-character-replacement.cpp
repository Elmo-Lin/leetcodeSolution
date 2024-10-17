class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxCount=0;
        int start=0;
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
            maxCount=max(maxCount, m[s[i]]);
            if(i-start+1-maxCount>k){
                m[s[start]]--;
                start++;
            }
            res=max(res, i-start+1);
        }
        return res;
    }
};
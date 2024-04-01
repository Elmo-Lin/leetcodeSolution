class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> m(128);
        int left=0, count=0, minLeft=-1, minLen=INT_MAX;
        for(char c : t){
            m[c]++;
        }
        for(int i=0; i<s.size(); i++){
            m[s[i]]--;
            if(m[s[i]]>=0){
                count++;
            }
            while(count==t.size()){
                if(minLen>i-left+1){
                    minLen=i-left+1;
                    minLeft=left;
                }
                m[s[left]]++;
                if(m[s[left]]>0){
                    count--;
                }
                left++;
            }
        }
        return minLeft==-1 ? "" : s.substr(minLeft, minLen);
    }
};
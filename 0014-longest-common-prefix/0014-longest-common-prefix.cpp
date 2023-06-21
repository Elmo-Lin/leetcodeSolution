class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        for(int j=0; j<strs[0].size(); j++){
            char c=strs[0][j];
            for(int i=1; i<strs.size(); i++){
                if(c!=strs[i][j]){
                    return res;
                }
            }
            res+=c;
        }
        return res;
    }
};
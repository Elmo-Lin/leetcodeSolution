class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        bool found=false;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' '){
                res++;
                found=true;
            }else if(found){
                break;
            }
        }
        return res;
    }
};
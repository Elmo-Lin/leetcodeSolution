class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool found=false;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]!=' '){
                found=true;
                count++;
            }else if(found){
                break;
            }
        }
        return count;
    }
};
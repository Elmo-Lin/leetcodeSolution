class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        
        int start=0;
        int maxLen=0;
        for(int i=0; i<s.size()-1; i++){
            searchPalindrome(s, i, i, start, maxLen);
            searchPalindrome(s, i, i+1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }
    void searchPalindrome(string s, int left, int right, int& start, int& maxLen){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        if(maxLen<right-left-1){
            maxLen=right-left-1;
            start=left+1;
        }
    }
};
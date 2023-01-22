class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        vector<string> track;
        backtrack(0, s, track);
        return res;
    }
    void backtrack(int index, string s, vector<string> &track){
        if(index == s.size()){
            res.push_back(track);
            return;
        }
        for(int i=index; i<s.size(); i++){
            if(isPalindrome(s, index, i)){
                track.push_back(s.substr(index, i-index+1));
                backtrack(i+1, s, track);
                track.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
};
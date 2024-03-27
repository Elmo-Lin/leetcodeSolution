class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> res;
        vector<string> dict{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(digits, dict, 0, "", res);
        return res;
    }
    void helper(string digits, vector<string>& dict, int pos, string cur, vector<string>& res){
        if(pos==digits.size()){
            res.push_back(cur);
            return;
        }
        string str=dict[digits[pos]-'0'];
        for(int i=0; i<str.size(); i++){
            helper(digits, dict, pos+1, cur+str[i], res);
        }
    }
};
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string res, word;
        while(iss>>word){
            if(res.size()>0){
                word+=' ';
            }
            res=word+res;
        }
        return res;
    }
};
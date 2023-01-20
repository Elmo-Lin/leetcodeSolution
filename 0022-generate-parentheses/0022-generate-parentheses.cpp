class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        backtrack(n, n, "");
        return res;
    }
    void backtrack(int left, int right, string track){
        if(left>right){
            return;
        }
        if(left==0 && right==0){
            res.push_back(track);
        }
        else{
            if(left>0){
                backtrack(left-1, right, track+'(');
            }
            if(right>0){
                backtrack(left, right-1, track+')');
            }
        }
    }
};
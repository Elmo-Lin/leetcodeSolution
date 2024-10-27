class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res;
        unordered_set<string> s(nums.begin(), nums.end());
        dfs(nums.size(), "", s, res);
        return res;
    }
    void dfs(int n, string cur, unordered_set<string> s, string& res){
        if(!res.empty()){
            return;
        }
        if(cur.size()==n){
            if(s.find(cur)==s.end()){
                res=cur;
            }
            return;
        }
        dfs(n, cur+"0", s, res);
        dfs(n, cur+"1", s, res);
    }
};
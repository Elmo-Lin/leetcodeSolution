class Solution {
public:
    int res=0;
    int numTilePossibilities(string tiles) {
        vector<int> count(26, 0);
        for(char c : tiles){
            count[c-'A']++;
        }
        backtrack(count);
        return res;
    }
    void backtrack(vector<int>& count){
        for(int i=0; i<26; i++){
            if(count[i]==0){
                continue;
            }
            res++;
            count[i]--;
            backtrack(count);
            count[i]++;
        }
    }
};
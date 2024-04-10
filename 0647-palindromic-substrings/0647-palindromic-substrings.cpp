class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<bool>> dp(n, vector<bool>(n));
        int res=0;
        for(int j=0; j<n; j++){
            for(int i=0; i<=j; i++){
                dp[i][j]=(s[i]==s[j] && (j-i<=2 || dp[i+1][j-1]));
                if(dp[i][j]){
                    res++;
                }
            }
        }
        return res;
    }
};
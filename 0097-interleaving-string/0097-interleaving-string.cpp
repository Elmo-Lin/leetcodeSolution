class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.size();
        int n=s2.size();
        int l=s3.size();
        if(m+n!=l){
            return false;
        }
        if(m==0 && n==0 && l==0){
            return true;
        }
        vector<vector<bool>> dp(m+1, vector<bool>(n+1));
        dp[0][0]=true;
        for(int i=1; i<=m; i++){
            if(s1[i-1]==s3[i-1] && dp[i-1][0]==true){
                dp[i][0]=true;
            }
        }
        for(int j=1; j<=n; j++){
            if(s2[j-1]==s3[j-1] && dp[0][j-1]==true){
                dp[0][j]=true;
            }
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s1[i-1]==s3[i+j-1] && dp[i-1][j]==true){
                    dp[i][j]=true;
                }
                if(s2[j-1]==s3[i+j-1] && dp[i][j-1]==true){
                    dp[i][j]=true;
                }
            }
        }
        return dp[m][n];
    }
};
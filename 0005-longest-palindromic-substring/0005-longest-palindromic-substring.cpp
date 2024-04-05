class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>> dp(n, vector<bool>(n));
        int left=0;
        int maxLen=1;
        for(int j=0; j<n; j++){
            dp[j][j]=true;
            for(int i=0; i<j; i++){
                dp[i][j]=(s[i]==s[j] && (j-i==1 || dp[i+1][j-1]));
                if(dp[i][j] && maxLen<j-i+1){
                    maxLen=j-i+1;
                    left=i;
                }
            }
        }
        return s.substr(left, maxLen);
    }
};
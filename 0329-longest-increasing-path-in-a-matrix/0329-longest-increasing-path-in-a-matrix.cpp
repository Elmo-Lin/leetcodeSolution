class Solution {
public:
    vector<vector<int>> dirs={{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int res=0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res=max(res, dfs(matrix, dp, i, j));
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& matrix,  vector<vector<int>>& dp, int i, int j){
        if(dp[i][j]){
            return dp[i][j];
        }
        int m=matrix.size();
        int n=matrix[0].size();
        int mx=1;
        for(auto dir : dirs){
            int x=i+dir[0];
            int y=j+dir[1];
            if(x<0 || x>=m || y<0 || y>=n || matrix[i][j]>=matrix[x][y]){
                continue;
            }
            int len=1+dfs(matrix, dp, x, y);
            mx=max(mx, len);
        }
        dp[i][j]=mx;
        return mx;   
    }
};
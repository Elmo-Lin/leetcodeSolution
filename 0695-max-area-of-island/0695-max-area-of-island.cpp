class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        int count;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    count=0;
                    dfs(grid, i, j, count, res);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int i, int j, int& count, int& res){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!=1){
            return;
        }
        count++;
        res=max(res, count);
        grid[i][j]=0;
        dfs(grid, i+1, j, count, res);
        dfs(grid, i, j+1, count, res);
        dfs(grid, i-1, j, count, res);
        dfs(grid, i, j-1, count, res);
    }
};
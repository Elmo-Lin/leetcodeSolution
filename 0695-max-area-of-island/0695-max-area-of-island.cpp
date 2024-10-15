class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count;
        int res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    count=0;
                    dfs(grid, res, i, j, count);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int& res, int i, int j, int& count){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return;
        }
        count++;
        res=max(res, count);
        grid[i][j]=0;
        dfs(grid, res, i+1, j, count);
        dfs(grid, res, i, j+1, count);
        dfs(grid, res, i-1, j, count);
        dfs(grid, res, i, j-1, count);
    }
};
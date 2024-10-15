class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    res++;
                    dfs(grid, res, i, j);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<char>>& grid, int& res, int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        dfs(grid, res, i+1, j);
        dfs(grid, res, i, j+1);
        dfs(grid, res, i-1, j);
        dfs(grid, res, i, j-1);
    }
};
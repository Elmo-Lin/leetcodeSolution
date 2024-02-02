class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    continue;
                }
                int count=0;
                helper(grid, i, j, count, res);
            }
        }
        return res;
    }
    void helper(vector<vector<int>>& grid, int i, int j, int& count, int& res){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!=1){
            return;
        }
        count++;
        res=max(res, count);
        grid[i][j]=-1;
        helper(grid, i+1, j, count, res);
        helper(grid, i, j+1, count, res);
        helper(grid, i-1, j, count, res);
        helper(grid, i, j-1, count, res);
    }
};
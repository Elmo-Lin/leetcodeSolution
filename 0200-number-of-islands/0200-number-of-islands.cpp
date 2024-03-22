class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    res++;
                    helper(grid, res, i, j);
                }
            }
        }
        return res;
    }
    void helper(vector<vector<char>>& grid, int& res, int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        helper(grid, res, i+1, j);
        helper(grid, res, i, j+1);
        helper(grid, res, i-1, j);
        helper(grid, res, i, j-1);
    }
};
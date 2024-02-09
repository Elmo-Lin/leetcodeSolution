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
                    helper(grid, i, j);
                }
            }
        }
        return res;
    }
    void helper(vector<vector<char>>& grid, int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!='1'){
            return;
        }
        grid[i][j]='0';
        helper(grid, i+1, j);
        helper(grid, i, j+1);
        helper(grid, i-1, j);
        helper(grid, i, j-1);
    }
};
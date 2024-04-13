class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> res;
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n));
        vector<vector<bool>> atlantic(m, vector<bool>(n));
        for(int i=0; i<m; i++){
            dfs(heights, pacific, INT_MIN, i, 0);
            dfs(heights, atlantic, INT_MIN, i, n-1);
        }
        for(int j=0; j<n; j++){
            dfs(heights, pacific, INT_MIN, 0, j);
            dfs(heights, atlantic, INT_MIN, m-1, j);
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i, j});
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int pre, int i, int j){
        int m=heights.size();
        int n=heights[0].size();
        if(i<0 || i>=m || j<0 || j>=n || visited[i][j] || pre>heights[i][j]){
            return;
        }
        visited[i][j]=true;
        dfs(heights, visited, heights[i][j], i+1, j);
        dfs(heights, visited, heights[i][j], i, j+1);
        dfs(heights, visited, heights[i][j], i-1, j);
        dfs(heights, visited, heights[i][j], i, j-1);
    }
};
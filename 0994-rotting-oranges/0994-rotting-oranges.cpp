class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        int count=0;
        queue<vector<int>> q;
        vector<vector<int>> dirs{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    count++;
                }else if(grid[i][j]==2){
                    q.push({i, j});
                }
            }
        }
        while(!q.empty() && count>0){
            int size=q.size();
            for(int i=0; i<size; i++){
                auto cur=q.front();
                q.pop();
                for(int k=0; k<4; k++){
                    int x=cur[0]+dirs[k][0];
                    int y=cur[1]+dirs[k][1];
                    if(x<0 || x>=m || y<0 || y>=n || grid[x][y]!=1){
                        continue;
                    }
                    grid[x][y]=2;
                    q.push({x, y});
                    count--;
                }
            }
            res++;
        }
        return count>0 ? -1 : res;
    }
};
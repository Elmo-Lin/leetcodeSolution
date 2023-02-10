class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int step=0, n=grid.size();
        vector<vector<int>> dirs{{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        queue<vector<int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    continue;
                }
                q.push(vector<int>{i, j});
            }
        }
        if(q.size()==0 || q.size()==n*n){
            return -1;
        }
        while(!q.empty()){
            step++;
            int size=q.size();
            for(int k=0; k<size; k++){
                auto t=q.front();
                q.pop();
                for(auto dir : dirs){
                    int x=t[0]+dir[0];
                    int y=t[1]+dir[1];
                    if(x<0 || x>=n || y<0 || y>=n || grid[x][y]!=0){
                        continue;
                    }
                    grid[x][y]=step;
                    q.push({x, y});
                }
            }
        }
        return step-1;
    }
};

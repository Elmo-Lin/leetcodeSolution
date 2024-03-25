class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        vector<vector<int>> dirs{{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        queue<vector<int>> q;
        int count=0;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j]==1){
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
                for (int k=0; k<4; k++){
                    int x=cur[0]+dirs[k][0];
                    int y=cur[1]+dirs[k][1];
                    if (x<0 || x>=m || y<0 || y>=n || grid[x][y]!=1){
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

/*
while 循環，循環條件是佇列不會空，且freshLeft 大於0，使用層序遍歷的方法，用個for
迴圈在內部。
每次取出隊首元素，遍歷其周圍四個位置，越界或不是新鮮橘子都跳過，否則將新鮮橘子標記為腐爛，加入隊列中，並且
freshLeft 自減1。 每層遍歷完成之後，結果 res
自增1，最後返回的時候，若還有新鮮橘子，即 freshLeft 大於0時，返回 -1，否則返回
res
*/
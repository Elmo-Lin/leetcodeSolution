class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        queue<pair<int, int>> q;
        vector<vector<int>> dirs{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int m=rooms.size();
        int n=rooms[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(rooms[i][j]==0){
                    q.push({i, j});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0; k<4; k++){
                int x=i+dirs[k][0];
                int y=j+dirs[k][1];
                if(x<0 || x>=m || y<0 || y>=n || rooms[x][y]!=INT_MAX){
                    continue;
                }
                rooms[x][y]=rooms[i][j]+1;
                q.push({x, y});
            }
        }
    }
};
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dirs{{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        queue<pair<int, int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                    q.push({i, j});
                }else{
                    mat[i][j]=INT_MAX;
                }
            }
        }
        while(!q.empty()){
            auto t=q.front();
            q.pop();
            for(auto dir : dirs){
                int x=t.first+dir[0];
                int y=t.second+dir[1];
                if(x<0 || x>=m || y<0 || y>=n || mat[x][y]<=mat[t.first][t.second]+1){
                    continue;
                }
                mat[x][y]=mat[t.first][t.second]+1;
                q.push({x, y});
            }
        }
        return mat;
    }
};
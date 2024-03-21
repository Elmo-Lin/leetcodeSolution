class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx={-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> dy={-1, 0, 1, -1, 1, -1, 0, 1};
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                int count=0;
                for(int k=0; k<8; k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x>=0 && y>=0 && x<board.size() && y<board[0].size() && (board[x][y]==1 || board[x][y]==2)){
                        count++;
                    }
                }
                if(board[i][j]==1 && (count<2 || count>3)){
                    board[i][j]=2;
                }else if(board[i][j]==0 && count==3){
                    board[i][j]=3;
                }
            }
        }
        for(int i=0; i<board.size(); ++i){
            for(int j= 0; j<board[0].size(); j++){
                board[i][j]%=2;
            }
        }
    }
};


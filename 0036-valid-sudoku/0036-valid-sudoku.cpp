class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rowFlag(9, vector<bool>(9));
        vector<vector<bool>> colFlag(9, vector<bool>(9));
        vector<vector<bool>> cellFlag(9, vector<bool>(9));
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int c=board[i][j]-'1';
                if(rowFlag[i][c] || colFlag[c][j] || cellFlag[3*(i/3)+j/3][c]){
                    return false;
                }
                rowFlag[i][c]=true;
                colFlag[c][j]=true;
                cellFlag[3*(i/3)+(j/3)][c]=true;
            }
        }
        return true;
    }
};
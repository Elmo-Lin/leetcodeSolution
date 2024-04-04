class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> queens(n, string(n, '.'));
        dfs(0, queens, res);
        return res;
    }
    void dfs(int row,  vector<string>& queens, vector<vector<string>>& res){
        int n=queens.size();
        if(row==n){
            res.push_back(queens);
            return;
        }
        for(int j=0; j<n; j++){
            if(isValid(queens, row, j)){
                queens[row][j]='Q';
                dfs(row+1, queens, res);
                queens[row][j]='.';
            }
        }
    }
    bool isValid(vector<string>& queens, int row, int col){
        for(int i=0; i<row; i++){
            if(queens[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(queens[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<queens.size(); i--, j++){
            if(queens[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
};
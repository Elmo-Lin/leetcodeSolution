class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int left=0;
        int up=0;
        int right=matrix[0].size()-1;
        int down=matrix.size()-1;
        while(1){
            for(int j=left; j<=right; j++){
                res.push_back(matrix[up][j]);
            }
            up++;
            if(up>down){
                break;
            }
            for(int i=up; i<=down; i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            if(right<left){
                break;
            }
            for(int j=right; j>=left; j--){
                res.push_back(matrix[down][j]);
            }
            down--;
            if(down<up){
                break;
            }
            for(int i=down; i>=up; i--){
                res.push_back(matrix[i][left]);
            }
            left++;
            if(left>right){
                break;
            }
        }
        return res;
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> temp_i;
        vector<int> temp_j;
        int count=0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    temp_i.push_back(i);
                    temp_j.push_back(j);
                    count++;
                }
            }
        }
        for(int a=0; a<count; a++){
            int i=temp_i[a];
            int j=temp_j[a];
            for(int k=0; k<matrix.size(); k++){
                matrix[k][j]=0;
            }
            for(int k=0; k<matrix[0].size(); k++){
                matrix[i][k] = 0;
            }
        }
    }
};
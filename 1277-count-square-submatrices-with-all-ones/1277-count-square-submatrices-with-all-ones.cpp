class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int res=0;
        vector<vector<int>> dp=matrix;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(dp[i][j]>0 && i>0 && j>0){
                    dp[i][j]=min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
                }
                res+=dp[i][j];
            }
        }
        return res;

    }
};

/*

更新的位置必須是 dp 值大於0的地方，並且不能是第一行或第一列，不然正方形邊長不可能超過1。 更新的狀態轉移方程式就是看目前位置的左邊，上邊，和左上邊三個位置中的最小值，並加上1。 若那三個位置的值都不為0的話，就保證了必然有大於1的正方形存在，就算最小值為0，加上1後，至少dp 的值不會改變（因為初始化時賦值為1了 ），每次更新完dp 值後，將其加到結果res 中即可

*/

// 0 1 1 1 
// 1 1 1 1
// 0 1 1 1

// 0 1 1 1
// 1 1 2 2
// 0 1 2 3
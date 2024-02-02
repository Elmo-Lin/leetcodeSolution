class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        int res=0;
        vector<vector<int>> nums(3*n, vector<int>(3*n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='/'){
                    nums[i*3][j*3+2]=1;
                    nums[i*3+1][j*3+1]=1;
                    nums[i*3+2][j*3]=1;
                }else if(grid[i][j]=='\\'){
                    nums[i*3][j*3]=1;
                    nums[i*3+1][j*3+1]=1;
                    nums[i*3+2][j*3+2]=1;
                }
            }
        }
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(nums[i][j]==0){
                    helper(nums, i, j);
                    res++;
                }
            }
        }
        return res;
    }
    void helper(vector<vector<int>>& nums, int i, int j) {
        if(i>=0 && j>=0 && i<nums.size() && j<nums.size() && nums[i][j]==0){
            nums[i][j]=1;
            helper(nums, i-1, j);
            helper(nums, i, j+1);
            helper(nums, i+1, j);
            helper(nums, i, j-1);
        }
    }
};
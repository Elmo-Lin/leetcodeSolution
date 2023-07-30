class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        res=0
        row=[0]*m
        col=[0]*n
        for i in range(0, m):
            for j in range(0, n):
                row[i]=max(row[i], grid[i][j])
                col[j]=max(col[j], grid[i][j])
        
        for i in range(0, m):
            for j in range(0, n):
                res+=min(row[i]-grid[i][j], col[j]-grid[i][j])
                
        return res
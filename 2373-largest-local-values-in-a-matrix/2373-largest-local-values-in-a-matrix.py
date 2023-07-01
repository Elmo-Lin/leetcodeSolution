class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        res=[]
        for i in range(0, len(grid)-2):
            row=[]
            for j in range(0, len(grid)-2):
                curmax=max(grid[i][j], grid[i][j+1], grid[i][j+2], grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2], grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2])
                row.append(curmax)
            res.append(row)
        
        return res
           
class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        res=0
        for i in range(0, len(grid)):
            for j in range(0, len(grid)):
                if grid[i][j]>0:
                    res+=4*grid[i][j]+2
                if i>0:
                    res-=min(grid[i][j], grid[i-1][j])*2
                if j>0:
                    res-=min(grid[i][j], grid[i][j-1])*2
        
        return res
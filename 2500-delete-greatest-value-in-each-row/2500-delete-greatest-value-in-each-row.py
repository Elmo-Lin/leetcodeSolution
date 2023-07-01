class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        for i in range(0, len(grid)):
            grid[i].sort()
        
        res=0
        for j in range(0, len(grid[0])):
            curmax=0
            for i in range(0, len(grid)):
                if grid[i][j]>curmax:
                    curmax=grid[i][j]
            res+=curmax
        
        return res
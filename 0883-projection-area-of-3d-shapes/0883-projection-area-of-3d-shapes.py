class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        res=0
        for i in range(0, len(grid)):
            rowMax=0
            colMax=0
            for j in range(0, len(grid[0])):
                if grid[i][j]>0:
                    res+=1
                rowMax=max(rowMax, grid[i][j])
                colMax=max(colMax, grid[j][i])
            
            res+=rowMax+colMax
        
        return res
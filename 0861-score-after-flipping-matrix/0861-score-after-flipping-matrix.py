class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        for i in range(0, len(grid)):
            if grid[i][0]==0:
                for j in range(0, len(grid[0])):
                    if grid[i][j]==0:
                        grid[i][j]=1
                    else:
                        grid[i][j]=0
        
        for j in range(0, len(grid[0])):
            count=0
            for i in range(0, len(grid)):
                if grid[i][j]==1:
                    count+=1
            
            if count<len(grid)/2:
                for i in range(0, len(grid)):
                    if grid[i][j]==0:
                        grid[i][j]=1
                    else:
                        grid[i][j]=0
        
        res=0
        for row in grid:
            res+=int("".join(str(x) for x in row), 2)
            
        return res
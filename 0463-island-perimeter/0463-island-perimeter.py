class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        res=0
        for row in grid:
            row=0, *row, 0
            for i in range(0, len(row)-1):
                if row[i]!=row[i+1]:
                    res+=1
        
        for row in (*zip(*grid), ):
            row=0, *row, 0
            for i in range(0, len(row)-1):
                if row[i]!=row[i+1]:
                    res+=1
        
        return res
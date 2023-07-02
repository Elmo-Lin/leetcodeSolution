class Solution:
    def findColumnWidth(self, grid: List[List[int]]) -> List[int]:
        res=[]
        for i in range(0, len(grid[0])):
            curmax=0
            for j in range(0, len(grid)):
                if self.width(grid[j][i])>curmax:
                    curmax=self.width(grid[j][i])
                    
            res.append(curmax)
        
        return res
    
    
    def width(self, n):
        if n==0:
            return 1
        res=0
        if n<0:
            n=n*(-1)
            res+=1
        
        while(n):
            res+=1
            n//=10
        
        return res
        
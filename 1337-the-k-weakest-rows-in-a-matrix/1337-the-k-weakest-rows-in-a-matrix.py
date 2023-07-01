class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        soldier=[]
        for i in range(0, len(mat)):
            count=0
            for j in range(0, len(mat[0])):
                if mat[i][j]==1:
                    count+=1
            soldier.append([count, i])
        
        soldier.sort()
        
        res=[]
        for i in range(0, k):
            res.append(soldier[i][1])
        
        return res
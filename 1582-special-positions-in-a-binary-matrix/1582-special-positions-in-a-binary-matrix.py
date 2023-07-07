class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        rows=[0]*len(mat)
        cols=[0]*len(mat[0])
        for i in range(0, len(mat)):
            for j in range(0, len(mat[0])):
                if mat[i][j]==1:
                    rows[i]+=1
                    cols[j]+=1
        
        res=0
        for i in range(0, len(mat)):
            for j in range(0, len(mat[0])):
                if mat[i][j]==1 and rows[i]==1 and cols[j]==1:
                    res+=1
                    
        return res
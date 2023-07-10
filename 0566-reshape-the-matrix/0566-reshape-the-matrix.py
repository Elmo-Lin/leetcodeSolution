class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        m=len(mat)
        n=len(mat[0])
        if m*n!=r*c:
            return mat
        
        res=[[0 for i in range(c)] for j in range(r)]
        for i in range(0, m*n):
            res[i//c][i%c]=mat[i//n][i%n]
        
        return res
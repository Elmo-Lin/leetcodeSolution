class Solution:
    def imageSmoother(self, img: List[List[int]]) -> List[List[int]]:
        m=len(img)
        n=len(img[0])
        res=[[0]*n for i in range(m)]
        dirs=[[0, 0], [0, 1], [0, -1], [1, 0], [-1, 0], [1, 1], [1, -1], [-1, 1], [-1, -1]]
        
        for i in range(0, m):
            for j in range(0, n):
                temp=[img[i+x][j+y] for x, y in dirs if 0<=i+x<m and 0<=j+y<n]
                res[i][j]=sum(temp)//len(temp)
        
        return res
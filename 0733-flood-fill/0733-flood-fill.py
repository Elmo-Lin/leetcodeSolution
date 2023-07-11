class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if image[sr][sc]==color:
            return image
        
        self.helper(image, sr, sc, image[sr][sc], color)
        return image
        
    def helper(self, image, i, j, color, newColor):
        m=len(image)
        n=len(image[0])
        if i<0 or i>=m or j<0 or j>=n or image[i][j]!=color:
            return
        
        image[i][j]=newColor
        self.helper(image, i+1, j, color, newColor)
        self.helper(image, i, j+1, color, newColor)
        self.helper(image, i-1, j, color, newColor)
        self.helper(image, i, j-1, color, newColor)
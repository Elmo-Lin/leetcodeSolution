class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for i in range(0, len(image)):
            image[i].reverse()
        
        for i in range(0, len(image)):
            for j in range(0, len(image[0])):
                if image[i][j]==1:
                    image[i][j]=0
                elif image[i][j]==0:
                    image[i][j]=1
            
        return image
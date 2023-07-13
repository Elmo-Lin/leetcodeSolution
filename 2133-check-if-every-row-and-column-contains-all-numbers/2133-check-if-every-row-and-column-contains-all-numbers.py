class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        for i in matrix:
            if len(matrix)!=len(set(i)):
                return False
        
        matrix=[list(col) for col in zip(*matrix)]
        for i in matrix:
            if len(matrix)!=len(set(i)):
                return False
        
        return True
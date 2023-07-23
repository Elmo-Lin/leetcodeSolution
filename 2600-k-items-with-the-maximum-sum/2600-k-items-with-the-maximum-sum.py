class Solution:
    def kItemsWithMaximumSum(self, numOnes: int, numZeros: int, numNegOnes: int, k: int) -> int:
        res=[]
        for i in range(numOnes):
            res.append(1)
        
        for i in range(numZeros):
            res.append(0)
            
        for i in range(numNegOnes):
            res.append(-1)
        
        ans=0
        for _ in range(0, len(res)-k):
            res.pop()
            
        ans=sum(res)
        return ans
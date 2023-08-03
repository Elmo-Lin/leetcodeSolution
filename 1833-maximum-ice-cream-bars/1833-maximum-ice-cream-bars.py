class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        res=0
        costs.sort()
        for i in range(0, len(costs)):
            if coins>=costs[i]:
                coins-=costs[i]
                res+=1
                
        return res
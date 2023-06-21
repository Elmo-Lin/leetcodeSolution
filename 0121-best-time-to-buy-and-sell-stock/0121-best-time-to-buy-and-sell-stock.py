class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res=0
        buy=sys.maxsize
        for i in range(0, len(prices)):
            buy=min(buy, prices[i])
            res=max(res, prices[i]-buy)
        return res
class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        res=0
        nums.sort()
        for i in range(0, k):
            m=nums[-1]
            res+=m
            nums.pop()
            nums.append(m+1)
        return res
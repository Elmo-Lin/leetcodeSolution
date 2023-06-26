class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        res=0
        for i in range(0, len(nums)):
            if nums[i]+diff in nums and nums[i]+diff*2 in nums:
                res+=1
        
        return res
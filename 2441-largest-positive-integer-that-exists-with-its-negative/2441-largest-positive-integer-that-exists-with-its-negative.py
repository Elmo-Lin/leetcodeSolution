class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        for i in range(0, len(nums)):
            if nums[i]*(-1) in nums:
                return nums[i]
        
        return -1
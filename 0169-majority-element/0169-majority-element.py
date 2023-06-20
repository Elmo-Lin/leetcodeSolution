class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        m=Counter(nums)
        for i, j in m.items():
            if j>len(nums)//2:
                return i
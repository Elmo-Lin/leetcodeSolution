class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count=0
        j=0
        for i in range(1, len(nums)):
            if nums[i]!=nums[j]:
                j+=1
                nums[j]=nums[i]
            else:
                count+=1
        for k in range(0, count):
            nums.pop()
            
        return len(nums)
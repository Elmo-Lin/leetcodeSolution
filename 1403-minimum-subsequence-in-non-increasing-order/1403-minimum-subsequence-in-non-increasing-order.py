class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        res=[]
        nums.sort(reverse=True)
        acc=sum(nums)
        cur=0
        
        i=0
        while(cur<=acc-cur and i<len(nums)):
            res.append(nums[i])
            cur+=nums[i]
            i+=1
        
        return res
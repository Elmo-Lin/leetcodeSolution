class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        
        mx, curMx, mn, curMn = -inf, 0, inf, 0
        
        for num in nums:       
                                                    
            curMx += num
            
            mx = max(mx, curMx)
            curMx = max(0, curMx)
                               
                
            curMn += num
            
            mn = min(mn, curMn)
            curMn = min(0, curMn)
            
        if mx<=0:
            return mx
            
        return max(mx, sum(nums)-mn)
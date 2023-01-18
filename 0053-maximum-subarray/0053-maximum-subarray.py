class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        mx, curMx = -inf, 0
        
        for num in nums:                           
                                                    
            curMx += num                            
            mx = max(mx, curMx)
            curMx = max(0, curMx)
            
        return mx
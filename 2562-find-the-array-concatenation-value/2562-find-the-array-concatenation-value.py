class Solution:
    def findTheArrayConcVal(self, nums: List[int]) -> int:
        i=0
        j=len(nums)-1
        res=0
        while i<=j:
            if i<j:
                temp=""
                temp+=str(nums[i])
                temp+=str(nums[j])
                res+=int(temp)
                i+=1
                j-=1
            else:
                res+=nums[i]
                i+=1
                j-=1
                
            
        
        return res
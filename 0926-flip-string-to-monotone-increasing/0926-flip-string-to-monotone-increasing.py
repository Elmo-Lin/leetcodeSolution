class Solution:
    def minFlipsMonoIncr(self, s: str) -> int:
        res=0
        ones=0
        for num in s:
            if num=="1":
                ones+=1
            elif ones>=1:
                res+=1
                ones-=1
            
        return res
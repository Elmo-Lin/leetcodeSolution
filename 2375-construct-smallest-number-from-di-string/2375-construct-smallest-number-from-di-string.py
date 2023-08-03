class Solution:
    def smallestNumber(self, pattern: str) -> str:
        n=len(pattern)
        res=[]
        
        left=0
        for i in range(0, n+1):
            res.append(str(i+1))
            if i==n or pattern[i]=='I':
                res[left:i+1]=reversed(res[left:i+1])
                left=i+1
    
        return ''.join(res)
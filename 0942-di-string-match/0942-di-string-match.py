class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        min=0
        max=len(s)
        res=[]
        for i in range(0, len(s)):
            if s[i]=='I':
                res.append(min)
                min+=1
            elif s[i]=='D':
                res.append(max)
                max-=1
        
        res.append(max)
        
        return res
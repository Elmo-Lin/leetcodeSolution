class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        res=[sys.maxsize]*len(s)
        j=0
        for i in range(0, len(s)):
            if s[i]==c:
                res[i]=0
                j=i
                j-=1
                value=1
                while(j>=0 and s[j]!=c):
                    res[j]=min(res[j], value)
                    value+=1
                    j-=1
            value=1
        
        for i in range(len(s)-1, -1, -1):
            if s[i]==c:
                res[i]=0
                j=i
                j+=1
                value=1
                while(j<len(s) and s[j]!=c):
                    res[j]=min(res[j], value)
                    value+=1
                    j+=1
            value=1
            
        return res
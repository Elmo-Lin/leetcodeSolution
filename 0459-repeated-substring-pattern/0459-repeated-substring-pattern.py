class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        n=len(s)
        t=""
        for i in range(0, n//2):
            t+=s[i]
            if t*(n//(i+1))==s:
                return True
            
        return False
class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        i=0
        j=len(s)-1
        s=list(s)
        while i<j:
            if s[i]!=s[j] and s[i]<s[j]:
                s[j]=s[i]
            else:
                s[i]=s[j]
    
            i+=1
            j-=1
        
        return ''.join(s)
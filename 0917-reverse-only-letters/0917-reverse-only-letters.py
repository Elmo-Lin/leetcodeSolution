class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        i=0
        j=len(s)-1
        s=list(s)
        while i<j:
            if s[i].isalpha() and s[j].isalpha():
                s[i], s[j]=s[j], s[i]
                i+=1
                j-=1
            else:
                if not s[i].isalpha():
                    i+=1
                if not s[j].isalpha():
                    j-=1
        
        return ''.join(s)
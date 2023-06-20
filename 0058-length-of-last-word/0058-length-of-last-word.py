class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count=0
        cur=0
        for i in range(0, len(s)):
            if(s[i]==" "):
                cur=0
            else:
                cur+=1
                count=cur         
        return count
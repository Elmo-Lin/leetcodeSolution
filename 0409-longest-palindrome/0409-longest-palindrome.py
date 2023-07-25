class Solution:
    def longestPalindrome(self, s: str) -> int:
        res=0
        flag=False
        m={}
        for c in s:
            if c in m:
                m[c]+=1
            else:
                m[c]=1
        
        for count in m.values():
            res += count
            if count%2==1:
                res-=1
                flag=True

        if flag:
            return res+1
        else:
            return res
class Solution:
    def minFlips(self, target: str) -> int:
        res=0
        for i in range(0, len(target)-1):
            if target[i+1]!=target[i]:
                res+=1
        
        return res+(target[0]=='1')
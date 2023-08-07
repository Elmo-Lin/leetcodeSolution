class Solution:
    def minFlips(self, target: str) -> int:
        res=0
        for i in range(0, len(target)-1):
            if target[i]!=target[i+1]:
                res+=1
        
        return res+(target[0]=='1')
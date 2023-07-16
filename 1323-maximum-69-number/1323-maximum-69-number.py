class Solution:
    def maximum69Number (self, num: int) -> int:
        digit=[]
        while num:
            digit.append(num%10)
            num//=10
        
        digit.reverse()
        
        for i in range(0, len(digit)):
            if digit[i]==6:
                digit[i]=9
                break
        
        res=""
        for i in range(0, len(digit)):
            digit[i]=str(digit[i])
            res+=digit[i]
            
        res=int(res)
        
        return res
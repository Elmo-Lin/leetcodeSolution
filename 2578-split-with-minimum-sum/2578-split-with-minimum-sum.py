class Solution:
    def splitNum(self, num: int) -> int:
        digit=[]
        while num:
            digit.append(num%10)
            num//=10
        
        digit.sort()
        
        num1=""
        num2=""
        for i in range(0, len(digit)):
            if i%2==0:
                num1+=str(digit[i])
            else:
                num2+=str(digit[i])
                
        num1=int(num1)
        num2=int(num2)
        
        return num1+num2
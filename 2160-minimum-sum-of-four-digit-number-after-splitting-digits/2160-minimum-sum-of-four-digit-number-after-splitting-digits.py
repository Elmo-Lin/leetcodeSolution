class Solution:
    def minimumSum(self, num: int) -> int:
        digit=[]
        while num:
            digit.append(num%10)
            num=num//10
        a, b, c, d=sorted(digit)
        return 10*(a+b)+(c+d)
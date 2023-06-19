class Solution:
    def climbStairs(self, n: int) -> int:
        if n==1 or n==2:
            return n
        
        a=1
        b=2
        for i in range(3,n+1):
            c=a+b
            a=b
            b=c
        return c
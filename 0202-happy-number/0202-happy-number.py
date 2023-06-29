class Solution:
    def isHappy(self, n: int) -> bool:
        slow=self.next(n)
        fast=self.next(self.next(n))
        
        while slow!=fast:
            slow=self.next(slow)
            fast=self.next(self.next(fast))
        
        return fast==1
    
    def next(self, n):
        r=0
        while n>0:
            d=n%10
            n//=10
            r+=d*d
        
        return r
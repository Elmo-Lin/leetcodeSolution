class Solution:
    def distMoney(self, money: int, children: int) -> int:
        res=(money-children)//7
        if children>money:
            return -1

        elif res==children-1 and (money-children)%7==3:
            return res-1
        
        elif res==children and (money-children)%7>0:
            return res-1

        elif children<res:
            return children-1

        return res
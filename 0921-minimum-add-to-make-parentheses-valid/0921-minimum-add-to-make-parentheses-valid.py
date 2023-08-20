class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        left=0
        right=0
        for c in s:
            if c=="(":
                right+=1
            elif right>0:
                right-=1
            else:
                left+=1
        
        return left+right
"""
遍歷字符串S，若遇到左括號，說明此時需要右括號，則right 自增1；若遇到了右括號，若此時right 大於0，說明當前的右括號可以用來匹配之前的左括號，不需要另加右括號，所以此時right 自減1；而若此時right 為0，說明當前的右括號前面沒有左括號可以跟其匹配，則此時left 自增1，表示需要額外的左括號
"""
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max=0
        for i in range(0, len(accounts)):
            sum=0
            for j in range(0, len(accounts[i])):
                sum+=accounts[i][j]
            if sum>max:
                max=sum
        
        return max
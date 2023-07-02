class Solution:
    def numRookCaptures(self, board: List[List[str]]) -> int:
        x=0
        y=0
        for i in range(0, 8):
            for j in range(0, 8):
                if board[i][j]=='R':
                    x=i
                    y=j
                    break
        
        res=0
        
        for i in range(x, 8):
            if board[i][y]=='B':
                break
            elif board[i][y]=='p':
                res+=1
                break
        
        for i in range(x, -1, -1):
            if board[i][y]=='B':
                break
            elif board[i][y]=='p':
                res+=1
                break
        
        for j in range(y, 8):
            if board[x][j]=='B':
                break
            elif board[x][j]=='p':
                res+=1
                break
        
        for j in range(y, -1, -1):
            if board[x][j]=='B':
                break
            elif board[x][j]=='p':
                res+=1
                break
        
        return res
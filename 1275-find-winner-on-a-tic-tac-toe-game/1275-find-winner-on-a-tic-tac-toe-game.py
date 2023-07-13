class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        win = [
            [[0,0],[0,1],[0,2]], [[0,0],[1,0],[2,0]],
            [[1,0],[1,1],[1,2]], [[0,1],[1,1],[2,1]],
            [[2,0],[2,1],[2,2]], [[0,2],[1,2],[2,2]],
            [[0,0],[1,1],[2,2]], [[0,2],[1,1],[2,0]]
        ]
        
        # Distribute
        A = [list(step) for step in moves[::2]]
        B = [list(step) for step in moves[1::2]]
            
        # Check winner
        for win_case in win:
            if win_case[0] in A and win_case[1] in A and win_case[2] in A: 
                return "A"
            if win_case[0] in B and win_case[1] in B and win_case[2] in B: 
                return "B"
               
        # No winner
        if len(moves) == 9: 
            return "Draw"
        else: 
            return "Pending"
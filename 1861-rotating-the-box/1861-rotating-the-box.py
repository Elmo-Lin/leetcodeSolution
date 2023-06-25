class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        for i in range(0, len(box)):
            stone=0
            for j in range(0, len(box[0])):
                if box[i][j]=='#':  # if a stone
                    stone+=1
                    box[i][j]='.'
                    
                elif box[i][j]=='*':    # if a obstacle
                    for m in range(0, stone):
                        box[i][j-m-1]='#'
                    stone=0
            if stone!=0:     # if reaches the end of j, but still have stone
                for m in range(0, stone):
                    box[i][j-m]='#'
        
        # rotate box, same as leetcode #48
        box[:]=zip(*box[::-1])
        
        return box
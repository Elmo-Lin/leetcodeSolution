class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        i=0
        j=len(colors)-1
        
        while colors[i]==colors[-1]:
            i+=1
            
        while colors[j]==colors[0]:
            j-=1
            
        return max(j, len(colors)-1-i)
class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        curMax=float('-inf')
        res=[-1]*len(arr)
        for i in range(len(arr)-2, -1, -1):
            curMax=max(curMax, arr[i+1])
            res[i]=curMax
        
        return res
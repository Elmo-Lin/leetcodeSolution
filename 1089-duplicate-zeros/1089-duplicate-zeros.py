class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        zeroes=arr.count(0)
        for i in range(len(arr)-1, -1, -1):
            if i+zeroes<len(arr):
                arr[i+zeroes]=arr[i]
            if arr[i]==0: 
                zeroes-=1
                if i+zeroes<len(arr):
                    arr[i+zeroes]=0

            
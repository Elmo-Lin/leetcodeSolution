class Solution:
    def pancakeSort(self, arr: List[int]) -> List[int]:
        res=[]
        while len(arr)>1:
            n=len(arr)
            i=0
            while i<n:
                if arr[i]==n:
                    break
                i+=1
            res.append(i+1)
            arr[:i+1]=reversed(arr[:i+1])
            res.append(n)
            arr.reverse()
            arr.pop()
            
        return res
        
"""
每次先將數組中最大數字找出來，然後將最大數字翻轉到首位置，然後翻轉整個數組，這樣最大數字就跑到最後去了
然後將最後面的最大數字去掉，這樣又重現一樣的情況，重複同樣的步驟，直到數組只剩一個數字1為止
"""
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(0, len(nums1)-m):
            nums1.pop()
            print(len(nums1))
        
        for i in range(0, n):
            nums1.append(nums2[i])
            
        nums1.sort()
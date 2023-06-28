class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res=[]
        m={}
        for c in nums1:
            if c in m:
                m[c]+=1
            else:
                m[c]=1
        
        for c in nums2:
            if c in m and m[c]>0:
                res.append(c)
                m[c]-=1
        
        return res
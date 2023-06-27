class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        m={}
        for i in range(0, len(nums1)):
            m[nums1[i][0]]=nums1[i][1]
        for i in range(0, len(nums2)):
            if nums2[i][0] not in m:
                m[nums2[i][0]]=nums2[i][1]
            else:
                m[nums2[i][0]]+=nums2[i][1]
        
        res=[]
        for k in m:
            res.append([k, m[k]])
        
        res.sort()
        return res
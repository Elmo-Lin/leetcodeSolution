class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res=""
        for j in range(0, len(strs[0])):
            c=strs[0][j]
            for i in range(1, len(strs)):
                if j>=len(strs[i]) or c!=strs[i][j]:
                    return res
            res+=c
        return res
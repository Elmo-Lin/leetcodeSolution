class Solution:
    def minMaxDifference(self, num: int) -> int:
        s=str(num)
        minimum=int(s.replace(s[0], '0'))
        
        for c in s:
            if c!='9':
                s=s.replace(c, '9')
                break
        
        maximum=int(s)
        return maximum-minimum
  
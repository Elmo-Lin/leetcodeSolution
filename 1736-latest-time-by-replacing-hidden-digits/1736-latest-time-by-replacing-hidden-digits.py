class Solution:
    def maximumTime(self, time: str) -> str:
        s=list(time)
        
        if s[0]=='?' and (s[1]=='0' or s[1]=='1' or s[1]=='2' or s[1]=='3' or s[1]=='?'):
            s[0]='2'
        elif s[0]=='?':
            s[0]='1'
        
        if s[1]=='?' and (s[0]=='0' or s[0]=='1'):
            s[1]='9'
        elif s[1]=='?':
            s[1]='3'
        
        if s[3]=='?':
            s[3]='5'
            
        if s[4]=='?':
            s[4]='9'
            
        return ''.join(s)
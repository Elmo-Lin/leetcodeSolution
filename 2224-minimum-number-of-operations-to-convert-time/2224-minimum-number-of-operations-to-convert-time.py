class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        res=0
        current=int(current[0:2])*60+int(current[3:])
        correct=int(correct[0:2])*60+int(correct[3:])
        diff=correct-current
        
        while diff:
            if diff>=60:
                diff-=60
                res+=1
            elif diff>=15:
                diff-=15
                res+=1
            elif diff>=5:
                diff-=5
                res+=1
            else:
                diff-=1
                res+=1
        
        return res
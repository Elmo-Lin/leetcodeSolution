class Solution:
    def minNumberOfHours(self, initialEnergy: int, initialExperience: int, energy: List[int], experience: List[int]) -> int:
        res=0
        SumOfEnergy=sum(energy)
        
        if SumOfEnergy>=initialEnergy:
            res+=(SumOfEnergy-initialEnergy+1)
        
        for i in range(0, len(experience)):
            if initialExperience>experience[i]:
                initialExperience+=experience[i]
            else:
                res+=(experience[i]-initialExperience+1)
                initialExperience+=(experience[i]-initialExperience+1+experience[i])
        
        return res
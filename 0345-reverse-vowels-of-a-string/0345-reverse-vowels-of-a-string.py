class Solution:
    def isVowel(self, c: str) -> bool:
        return c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c =='I' or c=='O' or c=='U'
    
    def reverseVowels(self, s: str) -> str:
        i=0
        j=len(s)-1
        s_list = list(s)
        while(i<j):
            if(self.isVowel(s_list[i]) and self.isVowel(s_list[j])):
                s_list[i], s_list[j] = s_list[j], s_list[i]
                i+=1
                j-=1
            elif(self.isVowel(s_list[i])):
                j-=1
            elif(self.isVowel(s_list[j])):
                i+=1
            else:
                i+=1
                j-=1
        
        return ''.join(s_list)
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOne=0;
        int countZero=0;
        string res="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                countOne++;
            }else{
                countZero++;
            }
        }
        while(countOne>1){
            res+='1';
            countOne--;
        }
        while(countZero>0){
            res+='0';
            countZero--;
        }
        res+='1';
        return res;
    }
};
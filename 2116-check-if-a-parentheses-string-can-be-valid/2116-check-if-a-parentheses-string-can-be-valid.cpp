class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size()%2==1){
            return false;
        }
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || locked[i]=='0'){
                count++;
            }else if(count>0){
                count--;
            }else{
                return false;
            }
        }
        count=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]==')' || locked[i]=='0'){
                count++;
            }else if(count>0){
                count--;
            }else{
                return false;
            }
        }
        return true;
    }
};
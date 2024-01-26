class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr;
        queue<int> qd;
        int n=senate.size();
        for(int i=0; i<senate.size(); i++){
            if(senate[i]=='R'){
                qr.push(i);
            }else{
                qd.push(i);
            }
        }
        
        while(!qr.empty() && !qd.empty()){
            int i=qr.front();
            qr.pop();
            int j=qd.front();
            qd.pop();
            
            if(i<j){
                qr.push(i+n);
            }else{
                qd.push(j+n);
            }
        }
        return (qr.size() > qd.size()) ? "Radiant" : "Dire";
    }
};
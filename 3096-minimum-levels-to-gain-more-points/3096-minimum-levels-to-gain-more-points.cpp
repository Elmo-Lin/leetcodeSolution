class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n=possible.size();
        int totalSum=0;
        for(int i=0; i<n; i++){
            if(possible[i]==0){
                totalSum-=1;
            }else{
                totalSum+=1;                
            }

        }
        int curSum=0;
        for(int i=0; i<n-1; i++){
            if(possible[i]==1){
                curSum+=1;
            }else{
                curSum-=1;
            }
            if(curSum>totalSum-curSum){
                return i+1;
            }
        }
        return -1;
    }
};
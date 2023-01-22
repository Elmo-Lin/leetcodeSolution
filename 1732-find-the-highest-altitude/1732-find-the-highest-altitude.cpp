class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int res=0;
        for(int i=0; i<gain.size(); i++){
            high+=gain[i];
            if(high>res){
                res=high;
            }
        }
        return res;
    }
};
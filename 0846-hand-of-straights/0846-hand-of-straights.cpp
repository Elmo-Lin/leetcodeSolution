class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> m;
        for(int num : hand){
            m[num]++;
        }
        for(auto it : m){
            for(int i=it.first; i<it.first+groupSize; i++){
                if(it.second==0){
                    continue;
                }
                if(it.second>m[i]){
                    return false;
                }
                m[i]-=it.second;
            }
        }
        return true;
    }
};
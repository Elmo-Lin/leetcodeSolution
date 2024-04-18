class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<int> pq;
        int res=0;
        for(int i=0; i<boxTypes.size(); i++){
            for(int j=0; j<boxTypes[i][0]; j++){
                pq.push(boxTypes[i][1]);
            }
        }
        for(int i=0; i<truckSize; i++){
            if(!pq.empty()){
                res+=pq.top();
                pq.pop();
            }
        }
        return res;
    }
};
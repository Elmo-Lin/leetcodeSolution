class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int res=0;
        double cur=0;
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<position.size(); i++){
            pq.push({position[i], speed[i]});
        }
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            double timeNeeded=(double)(target-t.first)/t.second;
            if(timeNeeded<=cur){
                continue;
            }
            cur=timeNeeded;
            res++;
        }
        return res;
    }
};
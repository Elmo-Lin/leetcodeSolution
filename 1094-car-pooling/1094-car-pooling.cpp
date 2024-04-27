class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i=0; i<trips.size(); i++){
            pq.push({trips[i][1], trips[i][0]});
            pq.push({trips[i][2], -trips[i][0]});
        }
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            capacity-=t.second;
            if(capacity<0){
                return false;
            }
        }
        return true;
    }
};
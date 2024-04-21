class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int res=0;
        int n=position.size();
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<n; i++){
            pq.push({position[i], speed[i]});
        }
        double cur=0;
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


// position: 10, 8, 0, 5, 3

//  distance: 2, 4, 12, 7, 9

//     speed: 2, 4, 1,  1, 3
//      time: 1, 1, 12, 7, 3
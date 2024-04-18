class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<pair<int, int>> qs;
        for(int i=0; i<queries.size(); i++){
            qs.push_back({queries[i], i});
        }
        sort(qs.begin(), qs.end());
        sort(intervals.begin(), intervals.end());
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        int cur=0;
        vector<int> res(queries.size(), -1);
        
        for(auto query : qs){
            auto [q, idx]=query;
            while(cur<intervals.size() && intervals[cur][0]<=q){
                pq.push({intervals[cur][1]-intervals[cur][0]+1, intervals[cur][1]});
                cur++;
            }
            while(!pq.empty() && pq.top().second<q){
                pq.pop();
            }
            if(!pq.empty()){
                res[idx]=pq.top().first;
            }
        }
        return res;
    }
};
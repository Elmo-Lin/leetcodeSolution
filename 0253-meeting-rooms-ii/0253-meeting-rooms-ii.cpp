class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> q;
        for(auto interval : intervals){
            if(!q.empty() && q.top()<=interval[0]){
                q.pop();
            }
            q.push(interval[1]);
        }
        return q.size();
    }
};
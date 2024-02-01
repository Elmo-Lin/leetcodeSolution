class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        helper(rooms, 0, visited);
        for(int i=0; i<visited.size(); i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
    void helper(vector<vector<int>>& rooms, int cur, vector<bool>& visited){
        visited[cur]=true;
        for (int next : rooms[cur]) {
            if(!visited[next]){
                helper(rooms, next, visited);
            }
        }
    }
};
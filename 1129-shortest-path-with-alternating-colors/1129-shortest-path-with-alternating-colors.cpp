class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> res(n);
        vector<vector<int>> dp(2, vector<int>(n));
        vector<vector<unordered_set<int>>> graph(2, vector<unordered_set<int>>(n));
        for(auto edge : redEdges){
            graph[0][edge[0]].insert(edge[1]);
        }
        for(auto edge : blueEdges){
            graph[1][edge[0]].insert(edge[1]);
        }
        for(int i=1; i<n; i++){
            dp[0][i]=2*n;
            dp[1][i]=2*n;
        }
        queue<vector<int>> q;
        q.push({0, 0});
        q.push({0, 1});
        while(!q.empty()){
            int cur=q.front()[0];
            int color=q.front()[1];
            q.pop();
            for(int next : graph[1-color][cur]){
                if(dp[1-color][next]==2*n){
                    dp[1-color][next]=1+dp[color][cur];
                    q.push({next, 1-color});
                }
            }
        }
        for(int i=0; i<n; i++){
            int val=min(dp[0][i], dp[1][i]);
            res[i]=val == 2*n ? -1 : val;
        }
        return res;
    }
};

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size();
        vector<pair<int, int>> arr(n);
        for(int i=0; i<n; i++){
            arr[i]={ages[i], scores[i]};
        }
        sort(arr.begin(), arr.end());
        return highestScore(n, arr);
    }
    int highestScore(int n, vector<pair<int, int>>& arr) {
        int maxScore=0;
        vector<int> dp(n);
        for(int i=0; i<n; i++){
            dp[i]=arr[i].second;
            for(int j=i-1; j>=0; j--){ 
                if (arr[i].second >= arr[j].second){
                    dp[i]=max(dp[i], dp[j] + arr[i].second);
                }
            }
            maxScore=max(maxScore, dp[i]);
        }
        return maxScore;
    }
};
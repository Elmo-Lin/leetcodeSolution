class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        int mx=0;
        vector<int> dp(n, 0);
        for(int i=0; i<n; i++){
            dp[i]=mx;
            mx=max(mx, height[i]);
        }
        mx=0;
        for(int i=n-1; i>=0; i--){
            dp[i]=min(mx, dp[i]);
            mx=max(mx, height[i]);
            if(dp[i]>height[i]){
                res+=dp[i]-height[i];
            }
        }
        return res;
    }
};

/*
height: 0,1,0,2,1,0,1,3,2,1,2,1
   
    dp: 0 0 1 1 2 2 2 2 2 2 1 0                      
       
    mx:1
*/
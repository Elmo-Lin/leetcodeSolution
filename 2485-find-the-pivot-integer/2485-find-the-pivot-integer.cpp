class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        int cur=0;
        for(int i=1; i<=n; i++){
            if(cur*2==sum-i){
                return i;
            }
            cur+=i;
        }
        return -1;
    }
};
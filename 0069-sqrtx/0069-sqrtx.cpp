class Solution {
public:
    int mySqrt(int x) {
        long left=1;
        long right=x;
        while(left+1<right){
            long long mid=left+(right-left)/2;
            if(mid*mid==x){
                return (int)mid;
            }else if(mid*mid<x){
                left=mid;
            }else{
                right=mid;
            }
        }
        if(right*right<=x){
            return (int)right;
        }else{
            return (int)left;
        }
    }
};
class Solution {
public:
    int mySqrt(int x) {
        int left=1;
        int right=x;
        while(left<=right){
            long mid=left+(right-left)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid<x){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return right;
    }
};
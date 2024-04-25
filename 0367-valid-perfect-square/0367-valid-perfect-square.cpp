class Solution {
public:
    bool isPerfectSquare(int num) {
        long left=1;
        long right=num;
        while(left+1<right){
            long mid=left+(right-left)/2;
            if(mid*mid==num){
                return true;
            }else if(mid*mid<num){
                left=mid;
            }else{
                right=mid;
            }
        }
        if(left*left==num){
            return true;
        }
        if(right*right==num){
            return true;
        }
        return false;
    }
};
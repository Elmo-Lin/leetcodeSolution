class Solution {
public:
    bool isHappy(int n) {
        int slow=digit(n);
        int fast=digit(digit(n));   
        while(slow!=fast){
            slow=digit(slow);
            fast=digit(digit(fast));
        }
        return slow==1;
    }
    int digit(int n){
        int res=0;
        while(n){
            int cur=n%10;
            res+=cur*cur;
            n/=10;
        }
        return res;
    }
};
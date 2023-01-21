class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> m;
        for(int i=lowLimit; i<=highLimit; i++){
            int digit=0;
            int x=i;
            while(x>0){
                digit+=(x%10);
                x/=10;
            }
            m[digit]++;
        }
        int res=0;
        for(auto it : m){
            if(it.second>res){
                res=it.second;
            }
        }
        return res;
    }
};
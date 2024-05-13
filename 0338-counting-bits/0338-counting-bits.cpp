class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0; i<=n; i++){
            int num=i;
            int count=0;
            while(num){
                if(num%2==1){
                    count++;
                }
                num/=2;
            }
            res.push_back(count);
        }
        return res;
    }
};
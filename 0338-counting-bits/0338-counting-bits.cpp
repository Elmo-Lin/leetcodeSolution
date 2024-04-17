class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0; i<=n; i++){
            int count=0;
            int temp=i;
            while(temp!=0){
                if(temp%2==1){
                    count++;
                }
                temp/=2;
            }
            res.push_back(count);
        }
        return res;
    }
};
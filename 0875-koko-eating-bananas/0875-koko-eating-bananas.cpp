class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(), piles.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(eat(piles, mid)>h){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return left;
    }
    int eat(vector<int>& piles ,int k){
        int h=0;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]%k==0){
                h+=piles[i]/k;
            }else{
                h+=piles[i]/k+1;
            }
        }
        return h;
    }
};

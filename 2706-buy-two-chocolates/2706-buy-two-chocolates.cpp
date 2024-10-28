class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int buy=0;
        sort(prices.begin(), prices.end());
        for(int i=0; i<2; i++){
            buy+=prices[i];
        }
        return money-buy>=0 ? money-buy : money; 
    }
};
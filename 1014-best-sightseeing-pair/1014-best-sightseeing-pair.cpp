class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int max_value=0;
        int res=0;
        for(int i=0; i<values.size(); i++){
            res=max(res, max_value+values[i]-i);
            max_value=max(max_value, values[i]+i);
        }
        return res;
    }
};

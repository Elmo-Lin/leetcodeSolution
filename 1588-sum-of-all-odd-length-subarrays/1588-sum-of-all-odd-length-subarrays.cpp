class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        for(int i=0; i<arr.size(); i++){
            res+=((i+1)*(arr.size()-i)+1)/2*arr[i];
        }
        return res;
    }
};
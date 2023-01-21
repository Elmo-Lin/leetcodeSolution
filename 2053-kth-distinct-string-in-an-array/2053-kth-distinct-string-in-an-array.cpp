class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        for(string s : arr){
            m[s]++;
        }
        int count=1;
        for(string s : arr){
            if(m[s]==1){
                if(count==k){
                    return s;
                }
                else{
                    count++;
                }
            }
        }
        return "";
    }
};
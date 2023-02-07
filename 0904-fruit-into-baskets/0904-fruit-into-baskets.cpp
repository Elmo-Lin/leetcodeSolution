class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res=0;
        int start=0;
        unordered_map<int, int> m;
        for(int i=0; i<fruits.size(); i++){
            m[fruits[i]]++;
            while(m.size()>2){
                m[fruits[start]]--;
                if(m[fruits[start]]==0){
                    m.erase(fruits[start]);
                }
                start++;
            }
            res=max(res, i-start+1);
        }
        return res;
    }
};
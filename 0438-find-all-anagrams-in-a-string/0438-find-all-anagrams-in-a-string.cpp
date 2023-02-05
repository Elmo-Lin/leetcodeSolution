class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n1=p.size();
        int n2=s.size();
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for(int i=0; i<n1; i++){
            m1[p[i]]++;
            m2[s[i]]++;
        }
        if(m1==m2){
            res.push_back(0);
        }
        for(int i=n1; i<n2; i++){
            m2[s[i]]++;
            m2[s[i-n1]]--;
            if(m2[s[i-n1]]==0){
                m2.erase(s[i-n1]);
            }
            if(m1==m2){
                res.push_back(i-n1+1);
            }
        }
        return res;
    }
};
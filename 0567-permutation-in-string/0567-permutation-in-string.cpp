class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()){
            return false;
        }
        int n1=s1.size();
        int n2=s2.size();
        //vector<int> m1(26), m2(26);
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for(int i=0; i<n1; i++){
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(m1==m2){
            return true;
        }
        for(int i=n1; i<n2; i++){
            m2[s2[i]]++;
            m2[s2[i-n1]]--;
            if(m2[s2[i-n1]]==0){
                m2.erase(s2[i-n1]);
            }
            if(m1==m2){
                return true;
            }
        }
        return false;
    }
};
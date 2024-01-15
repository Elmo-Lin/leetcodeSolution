class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int>m1;
        map<char, int>m2;
        
        for(int i=0; i<word1.size(); i++){
            m1[word1[i]]++;
        }
        
        for(int i=0; i<word2.size(); i++){
            m2[word2[i]]++;
        }
        
        if (m1.size() != m2.size()) {
            return false;
        }
        
        for (auto it : m1) {
            if (m2.find(it.first) == m2.end()) {
                return false;
            }
        }
        
        vector<int> freq1, freq2;
        for (auto it : m1) {
            freq1.push_back(it.second);
        }
        for (auto it : m2) {
            freq2.push_back(it.second);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;        
    }
};
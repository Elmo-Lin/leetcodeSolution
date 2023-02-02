class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> m;
        for(int i=0; i<order.size(); i++){
            m[order[i]]=i;
        }
        for(int i=1; i<words.size(); i++){
            string previous_word=words[i-1];
            string current_word=words[i];
            for(int j=0; j<previous_word.size(); j++){
                if(j==current_word.size()){
                    return false;
                }
                char p=previous_word[j];
                char c=current_word[j];
                if(m[p]<m[c]){
                    break;
                }
                if(m[p]>m[c]){
                    return false;
                }
            }
        }
        return true;
    }
};
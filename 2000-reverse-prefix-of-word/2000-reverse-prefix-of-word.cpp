class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left=0;
        int right=0;
        for(int j=0; j<word.size(); j++){
            if(word[j]==ch){
                right=j;
                break;
            }
        }
        while(left<right){
            swap(word[left], word[right]);
            left++;
            right--;
        }
        return word;
    }
};
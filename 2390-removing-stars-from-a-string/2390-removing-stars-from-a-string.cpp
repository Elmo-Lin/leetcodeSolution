class Solution {
public:
    string removeStars(string s) {
        vector<char> arr;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='*'){
                arr.push_back(s[i]);
            }else{
                arr.pop_back();
            }
        }
        
        string res="";
        for(int i=0; i<arr.size(); i++){
            res+=arr[i];
        }
        return res;
    }
};
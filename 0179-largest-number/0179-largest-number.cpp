class Solution {
public:
    static bool cmp(string a, string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for(int num : nums){
            strs.push_back(to_string(num));
        }
        sort(strs.begin(), strs.end(), cmp);
        
        string res;
        for(string str : strs){
            res+=str;
        }
        
        int i=0;
        while(i<res.size() && res[i]=='0'){
            i++;
        }
        if(i==res.size()){
            return "0";
        }else{
            return res.substr(i);
        }
        
        return res;
    }
};
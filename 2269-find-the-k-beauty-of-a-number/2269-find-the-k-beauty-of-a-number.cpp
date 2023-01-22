class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int res=0;
        string s=to_string(num);
        
        for(int i=0; i<=s.size()-k; i++){
            int t=stoi(s.substr(i, k));
            if(t!=0 && num%t==0){
                res++;
            }
        }
        return res;
    }
};
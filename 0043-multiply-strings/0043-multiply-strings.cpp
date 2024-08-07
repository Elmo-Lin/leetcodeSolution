class Solution {
public:
    string multiply(string num1, string num2) {
        string res;
        int m=num1.size();
        int n=num2.size();
        vector<int> vals(m+n);
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int p1=i+j;
                int p2=i+j+1;
                int sum=mul+vals[p2];
                vals[p1]+=sum/10;
                vals[p2]=sum%10;
            }
        }
        for(int val : vals){
            if(!res.empty() || val!=0){
                res.push_back(val+'0');
            }
        }
        return res.empty() ? "0" : res;
    }
};
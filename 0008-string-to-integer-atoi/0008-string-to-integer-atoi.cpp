class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int base=0;
        int n=s.size();
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && (s[i]=='+' || s[i]=='-')){
            sign=(s[i]=='+') ? 1 : -1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            if(base>INT_MAX/10 || (base==INT_MAX/10 && s[i]-'0'>7)){
                return (sign==1) ? INT_MAX : INT_MIN;
            }
            base=10*base+(s[i]-'0');
            i++;
        }

        return base*sign;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
                int cur=st.size();
                mx=max(mx, cur);
            }else if(s[i]==')'){
                st.pop();
            }
        }
        return mx;
    }
};
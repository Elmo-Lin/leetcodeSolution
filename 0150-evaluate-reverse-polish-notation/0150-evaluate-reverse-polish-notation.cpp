class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        long temp1;
        long temp2;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+"){
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                st.push(temp1+temp2);
            }
            else if(tokens[i]=="-"){
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                st.push(temp2-temp1);
            }
            else if(tokens[i]=="*"){
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                st.push(temp1*temp2);
            }
            else if(tokens[i]=="/"){
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                st.push(temp2/temp1);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
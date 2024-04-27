class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                st.push(st.top()*2);
            }else if(operations[i]=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp1);
                st.push(temp1+temp2);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int res=0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
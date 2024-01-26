class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        int index=0;
        string cur="";
        
        while(index<s.size()){
            if(isdigit(s[index])){
                int count=0;
                while(index<s.size() && isdigit(s[index])){
                    count=10*count+s[index]-'0';
                    index++;
                }
                num.push(count);
            }else if(s[index]=='['){
                str.push(cur);
                cur="";
                index++;
            }else if(s[index]==']'){
                if(!num.empty() && !str.empty()){
                    int count=num.top();
                    num.pop();

                    string temp=cur;
                    cur=str.top();
                    str.pop();

                    for(int i=0; i<count; i++){
                        cur+=temp;
                    }
                }
                index++;
            }else{
                cur+=s[index];
                index++;
            }
        }
        return cur; 
    }
};
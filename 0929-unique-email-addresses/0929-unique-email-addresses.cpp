class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> res;
        for(int i=0; i<emails.size(); i++){
            string cur="";
            bool found=false;
            for(int j=0; j<emails[i].size(); j++){
                if(emails[i][j]=='+'){
                    found=true;
                }else if(emails[i][j]=='@'){
                    cur+=emails[i].substr(j);
                    found=false;
                }else if(emails[i][j]!='.' && !found){
                    cur+=emails[i][j];
                }
            }
            res.insert(cur);
        }
        return res.size();
    }
};
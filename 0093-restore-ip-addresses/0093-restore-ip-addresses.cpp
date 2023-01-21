class Solution {
public:
    vector<string> res;
    vector<string> restoreIpAddresses(string s) {
        vector<string> track;
        backtrack(s, 0, track);
        return res;
    }
    void backtrack(string s, int i, vector<string>& track) {
        if(track.size()>4){
            return;
        }
        if(i==s.size() && track.size()==4){
            res.push_back(track[0]+"."+track[1]+"."+track[2]+"."+track[3]);
            return;
        }
        int count=1;
        while(i+count<=s.size() && stoi(s.substr(i, count))>=0 && stoi(s.substr(i, count))<=255){
            if(s[i]=='0' && count>1){
                break;
            }
            track.push_back(s.substr(i, count));
            backtrack(s, i+count, track);
            track.pop_back();
            count++;
        }
    }
};
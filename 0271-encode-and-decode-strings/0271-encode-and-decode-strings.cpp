class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res="" ;
        for(auto a : strs) {
            res.append(to_string(a.size())).append("/").append(a);
        }
        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i=0 ;
        while(i<s.size()){
            auto found=s.find("/" , i);
            int len=stoi(s.substr(i, found-i));
            res.push_back(s.substr(found+1 , len));
            i=found+len+1 ;
        }
        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
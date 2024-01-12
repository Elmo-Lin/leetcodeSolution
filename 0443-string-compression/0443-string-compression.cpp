class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        while(read<chars.size()){
            int count=0;
            char c=chars[read];
            while(read<chars.size() && c==chars[read]){
                count++;
                read++;
            }
            chars[write]=c;
            write++;
            if(count>1){
                for (char digit : to_string(count)) {
                    chars[write]=digit;
                    write++;
                }
            }
        }
        return write;
    }
};
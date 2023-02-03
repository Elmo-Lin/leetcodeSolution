class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1){
            return s;
        }
        string res;
        int size=2*numRows-2;
        int n=s.size();
        for(int i=0; i<numRows; i++){
            for(int j=i; j<n; j+=size){
                res+=s[j];
                int pos=j+size-2*i;
                if(i!=0 && i!=numRows-1 && pos<n){
                    res+=s[pos];
                }
            }
        }
        return res;
    }
};

/*
除了第一行和最後一行沒有中間形成之字型的數字外，其他都有，而首位兩行中相鄰兩個元素的 index 之差跟行數是相關的，為2*nRows - 2,可以按順序找到所有的黑色元素在元字符串的位置，將他們按順序加到新字符串裡面。每個紅色元素的位置為 j + 2 x numRows-2 - 2 x i, 其中，j為前一個黑色元素的 index，i為當前行數。比如當 n = 4 中的那個紅色5，它的位置為 1 + 2 x 4-2 - 2 x 1 = 5，為原字符串的正確位置
*/
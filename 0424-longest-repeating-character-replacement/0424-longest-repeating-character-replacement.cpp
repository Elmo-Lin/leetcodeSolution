class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxCount=0;
        int start=0;
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
            maxCount=max(maxCount, m[s[i]]);
            if(i-start+1-maxCount>k){
                m[s[start]]--;
                start++;
            }
            res=max(res, i-start+1);
        }
        return res;
    }
};

/*
原因是此題讓求的是最長的重複子串，maxCnt 相當於卡了一個窗口大小，我們並不希望窗口變小，雖然窗口在滑動，但是之前是出現過跟窗口大小相同的符合題意的子字串，縮小視窗沒有意義，並不會使結果res 變大，所以我們才不更新maxCnt 的
*/
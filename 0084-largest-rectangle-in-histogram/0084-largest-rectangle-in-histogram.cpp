class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res=0;
        stack<int> st;
        heights.push_back(0);
        for(int i=0; i<heights.size(); i++){
            if(st.empty() || heights[st.top()]<heights[i]){
                st.push(i);
            }else{
                int cur=st.top();
                st.pop();
                res=max(res, heights[cur]*(st.empty() ? i : (i-st.top()-1)));
                i--;
            }
        }
        return res;
    }
};

/*
由於先取出棧中最高的板子，就可以先算出長度為1的矩形面積了，然後再取下一個板子，此時根據矮板子的高度算長度為2的矩形面積，以此類推，知道數字大於 棧頂元素為止，再次進棧，巧妙的一比
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int res=(j-i)*min(height[i], height[j]);
        while(i<j){
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }         
            res=max(res, (j-i)*min(height[i], height[j]));
        }
        return res;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=-1;
        int right=matrix.size();
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]>target){
                right=mid;
            }else{
                left=mid;
            }
        }
        
        if(left==-1){
            return false;
        }
        
        int i=left;
        left=0;
        right=matrix[0].size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(matrix[i][mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
};
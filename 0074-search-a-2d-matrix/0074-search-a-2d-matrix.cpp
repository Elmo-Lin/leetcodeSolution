class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right=matrix.size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]>target){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        int temp=(right>0) ? right-1 : right;
        left=0;
        right=matrix[0].size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(matrix[temp][mid]==target){
                return true;
            }else if(matrix[temp][mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
};
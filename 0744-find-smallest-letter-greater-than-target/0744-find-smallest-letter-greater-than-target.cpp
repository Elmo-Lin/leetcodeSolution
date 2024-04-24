class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters.back()<=target){
            return letters[0];
        }
        int left=0;
        int right=letters.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(letters[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return letters[left];
    }
};
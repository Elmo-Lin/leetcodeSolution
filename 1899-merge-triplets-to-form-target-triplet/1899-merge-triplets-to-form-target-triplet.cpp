class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int> res(3, 0);
        for(int i=0; i<triplets.size(); i++){
            if(triplets[i][0]<=target[0] && triplets[i][1]<=target[1] && triplets[i][2]<=target[2]){
                res[0]=max(res[0], triplets[i][0]);
                res[1]=max(res[1], triplets[i][1]);
                res[2]=max(res[2], triplets[i][2]);
            }
        }
        return res==target;
    }
};
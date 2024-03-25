class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int num : asteroids){
            if(res.size()==0 || num>0){
                res.push_back(num);
            }else{
                while(res.size()!=0 && res.back()>0 && abs(res.back())<abs(num)){
                    res.pop_back();
                }
                if(res.size()==0 || res.back()<0){
                    res.push_back(num);
                }else if(abs(res.back())==abs(num)){
                    res.pop_back();
                }
            }
        }
        return res;
    }
};
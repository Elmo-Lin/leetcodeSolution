class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int i=0; i<asteroids.size(); i++){
            if(res.size()==0 || asteroids[i]>0){
                res.push_back(asteroids[i]);
            }else{
                while(res.size()!=0 && res.back()>0 && abs(res.back())<abs(asteroids[i])){
                    res.pop_back();
                }
                if(res.size()==0 || res.back()<0){
                    res.push_back(asteroids[i]);
                }else if(res.back()==abs(asteroids[i])){
                    res.pop_back();
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for(int i=0; i<asteroids.size(); i++){
            if(res.size()==0 || asteroids[i]>0){
                res.push_back(asteroids[i]);
            }else{
                while(!res.empty() && res.back()>0 && abs(asteroids[i])>res.back()){
                    res.pop_back();
                }
                if(res.empty() || res.back()<0){
                    res.push_back(asteroids[i]);
                }
                else if(abs(asteroids[i])==abs(res.back())){
                    res.pop_back();
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        int res=INT_MAX;
        int n=points.size();
        unordered_map<int, unordered_set<int>> m;
        for(auto point : points){
            m[point[0]].insert(point[1]);
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(points[i][0]==points[j][0] || points[i][1]==points[j][1]){
                    continue;
                }
                if(m[points[i][0]].count(points[j][1]) && m[points[j][0]].count(points[i][1])){
                    res=min(res, abs(points[i][0]-points[j][0])*abs(points[i][1]-points[j][1]));
                }
            }
        }
        return res==INT_MAX ? 0 : res;
    }
};

/*
使用一個HashMap，建立橫座標和所有具有該 橫座標的點的縱座標的集合之間的映射。 然後開始遍歷任兩個點的組合，由於這兩個點必須是對角線頂點，所以其橫縱座標均不能相等，若有一個相等了，則跳過該組合。 否則看其中任意一個點的橫座標對應的集合中是否均包含另一個點的縱座標，均包含的話，說明另兩個頂點也是存在的
*/
class Solution {
public:
    unordered_map<int, int> father;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for(auto edge : edges){
            int a=edge[0];
            int b=edge[1];
            if(father.find(a)==father.end()){
                father[a]=a;
            }
            if(father.find(b)==father.end()){
                father[b]=b;
            }
            if(findfather(a)==findfather(b)){
                return edge;
            }else{
                unionFind(a, b);
            }
        }
        return {};
    }
    int findfather(int x){
        if(father[x]!=x){
            father[x]=findfather(father[x]);
        }
        return father[x];
    }
    void unionFind(int x, int y) {
        x=father[x];
        y=father[y];
        if(x<y){
            father[y]=x;
        }else{
            father[x]=y;
        }
    }
};
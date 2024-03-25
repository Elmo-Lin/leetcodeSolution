class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        n++;
        unordered_map<char, int> m;
        for(char c : tasks){
            m[c]++;
        }
        priority_queue<int> pq;
        for(auto it : m){
            pq.push(it.second);
        }
        int res=0;
        while(!pq.empty()){
            int k=min(n, (int)pq.size());
            vector<int> temp;
            for(int i=0; i<k; i++){
                int f=pq.top();
                pq.pop();
                f--;
                if(f!=0){
                    temp.push_back(f);
                }
            }
            if(temp.size()>0){
                res+=n;
            }else{
                res+=k;
            }
            for(int f : temp){
                pq.push(f);
            }
        }
        return res;
    }
};
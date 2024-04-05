class Twitter {
private:
    int time;
    unordered_map<int, unordered_set<int>> friends;
    unordered_map<int, vector<pair<int, int>>> tweets; //    a => {time, tweetsId}
public:
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
        follow(userId, userId);
        tweets[userId].push_back({time, tweetId});
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto id : friends[userId]){
            for(auto a : tweets[id]){
                pq.push(a);
                if(pq.size()>10){
                    pq.pop();
                }
            }
        }
        while(!pq.empty()){
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followerId!=followeeId){
            friends[followerId].erase(followeeId);
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
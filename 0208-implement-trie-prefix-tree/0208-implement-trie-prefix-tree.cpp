class TrieNode{
public:
    TrieNode* child[26];
    bool isWord;
    TrieNode() : isWord(false){
        for(auto &a : child){
            a=nullptr;
        }
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root=new TrieNode;
    }
    
    void insert(string word) {
        TrieNode *p=root;
        for(auto &a : word){
            int i=a-'a';
            if(!p->child[i]){
                p->child[i]=new TrieNode();
            }
            p=p->child[i];
        }
        p->isWord=true;
    }
    
    bool search(string word) {
        TrieNode *p=root;
        for(auto &a : word){
            int i=a-'a';
            if(!p->child[i]){
                return false;
            }
            p=p->child[i];
        }
        return p->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode *p=root;
        for (auto &a : prefix) {
            int i=a-'a';
            if(!p->child[i]){
                return false;
            }
            p=p->child[i];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
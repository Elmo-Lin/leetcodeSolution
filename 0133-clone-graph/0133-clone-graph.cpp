/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node){
            return nullptr;
        }
        unordered_map<Node*, Node*> m;
        queue<Node*> q{{node}};
        Node* clone=new Node(node->val);
        m[node]=clone;
        while(!q.empty()){
            Node* t=q.front();
            q.pop();
            for(Node* neighbor : t->neighbors){
                if(!m.count(neighbor)){
                    m[neighbor]=new Node(neighbor->val);
                    q.push(neighbor);
                }
                m[t]->neighbors.push_back(m[neighbor]);
            }
        }
        return clone;
    }
};
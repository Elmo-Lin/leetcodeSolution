class MinStack {
public:
    MinStack() {
         min_val=INT_MAX;   
    }
    
    void push(int val) {
        if(val<=min_val){
            st.push(min_val);
            min_val=val;
        }
        st.push(val);
    }
    
    void pop() {
        int t=st.top();
        st.pop();
        if(t==min_val){
            min_val=st.top();
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_val;
    }
private:
    stack<int> st;
    int min_val;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
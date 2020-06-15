class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s,s1;
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        if(s1.empty() or x<=getMin())
            s1.push(x);
    }
    
    void pop() {
        if(s.top()==getMin())
            s1.pop();
        s.pop();
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

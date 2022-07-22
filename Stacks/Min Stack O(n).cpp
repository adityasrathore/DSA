class MinStack { //From LeetCode Template Using 2 Stack
public:
    stack <int> s;
    stack <int> ss;
    MinStack() {

    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty() || ss.top()>=val)
            ss.push(val);
    }
    
    void pop() {
        if(s.empty())
            return;
        s.pop();
        ss.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ss.top();
    }
};

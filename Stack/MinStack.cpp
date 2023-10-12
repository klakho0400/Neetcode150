class MinStack {
public:
stack<int> st;
stack<int> st1;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(st1.empty() || val<=st1.top())
        st1.push(val);
    }
    
    void pop() {
        int temp = st.top();
        st.pop();
        if(temp==st1.top())
        st1.pop();
    }
    
    int top() {
        int temp = st.top();
        return temp;
    }
    
    int getMin() {
        return st1.top();
    }
};
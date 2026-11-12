class MinStack {
    stack<int> s;
    stack<int> mini;

public:
    MinStack() {}

    void push(int val) {
        s.push(val);

        if(mini.empty() || val <= mini.top()) {
            mini.push(val);
        }
    }

    void pop() {
        if(s.top() == mini.top()) {
            mini.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return mini.top();
    }
};
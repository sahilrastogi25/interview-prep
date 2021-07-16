class MinStack {
public:
    /** initialize your data structure here. */

    stack<int>s1, s2;
    MinStack() {

    }

    void push(int val) {
        if (s2.empty() or val <= getMin()) {
            s2.push(val);
        }
        s1.push(val);
    }

    void pop() {
        if (s1.top() == getMin()) {
            s2.pop();
        }
        s1.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};

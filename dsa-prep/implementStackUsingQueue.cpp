class MyStack {
public:
    /** Initialize your data structure here. */

    queue<int>q1, q2;

    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q = q1;
        q1 = q2;
        q2 = q;
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if (q1.empty()) {
            return -1;
        }
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    /** Get the top element. */
    int top() {
        if (q1.empty()) {
            return -1;
        }
        int ans = q1.front();
        return ans;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};
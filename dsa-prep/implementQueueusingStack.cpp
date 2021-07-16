class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int>s1, s2;

    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        while (!s2.empty()) {
            int p = s2.top();
            s1.push(p);
            s2.pop();
        }
        s1.push(x);
        while (!s1.empty()) {
            int p = s1.top();
            s2.push(p);
            s1.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (s2.empty()) {
            return -1;
        }
        int ans = s2.top();
        s2.pop();
        return ans;
    }

    /** Get the front element. */
    int peek() {
        if (s2.empty()) {
            return -1;
        }
        return s2.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s2.empty();
    }
};

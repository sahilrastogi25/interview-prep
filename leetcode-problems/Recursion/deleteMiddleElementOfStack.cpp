class Solution
{
public:
    //Function to delete middle element of a stack.
    void solve(stack<int>&s, int k) {
        if (k == 1) {
            s.pop();
            return;
        }
        int last = s.top();
        s.pop();
        solve(s, k - 1);
        s.push(last);
        return;
    }
    void deleteMid(stack<int>&s, int n)
    {
        // code here..
        if (n == 0) {
            return;
        }
        int k = n / 2 + 1;
        solve(s, k);
        return;
    }
};
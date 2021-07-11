class Solution {
public:
    void solve(int o, int c, vector<string>&v, string output) {
        if (o == 0 and c == 0) {
            v.push_back(output);
            return;
        }
        if (o != 0) {
            string op1 = output;
            op1.push_back('(');
            solve(o - 1, c, v, op1);
        }
        if (c > o) {
            string op2 = output;
            op2.push_back(')');
            solve(o, c - 1, v, op2);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int o = n;
        int c = n;
        vector<string>v;
        string output;
        solve(o, c, v, output);
        return v;
    }
};
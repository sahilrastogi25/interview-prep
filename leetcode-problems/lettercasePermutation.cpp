class Solution {
public:
    void solve(vector<string>&v, string input, string output) {
        if (input.size() == 0) {
            v.push_back(output);
            return;
        }
        int ch = input[0] - '0';
        if (ch >= 0 and ch <= 9) {
            string result = output;
            result.push_back(input[0]);
            input.erase(input.begin());
            solve(v, input, result);
        }
        else {
            string op1 = output;
            string op2 = output;
            op1.push_back(input[0]);
            if (input[0] <= 90 and input[0] >= 65) {
                op2.push_back(input[0] + 32);
            } else if (input[0] > 90) {
                op2.push_back(input[0] - 32);
            }
            input.erase(input.begin());
            solve(v, input, op1);
            solve(v, input, op2);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        string output;
        vector<string>v;
        solve(v, s, output);
        return v;
    }
};
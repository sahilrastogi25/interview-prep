class Solution {
public:
    void solve(vector<string>&v, string input, string output) {
        if (input.size() == 0) {
            v.push_back(output);
            return;
        }
        if (isdigit(input[0])) {
            string result = output;
            result.push_back(input[0]);
            input.erase(input.begin());
            solve(v, input, result);
        }
        else {
            string op1 = output;
            string op2 = output;
            op1.push_back(tolower(input[0]));
            op2.push_back(toupper(input[0]));
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
class Solution {
public:
    void solve(vector<string>&v, string output, int ones, int zeroes, int n) {
        if (n == 0) {
            v.push_back(output);
            return;
        }
        if (ones == zeroes) {
            string op1 = output;
            op1.push_back('1');
            n--;
            ones++;
            solve(v, op1, ones, zeroes, n);
        }
        else {
            string op1 = output;
            string op2 = output;
            op1.push_back('1');
            op2.push_back('0');
            n--;
            ones++;
            solve(v, op1, ones, zeroes, n);
            zeroes++;
            solve(v, op2, --ones, zeroes, n);
        }
        return;
    }
    vector<string> NBitBinary(int N)
    {
        // Your code goes here
        vector<string>v;
        int ones = 0;
        int zeroes = 0;
        string output;
        solve(v, output, ones, zeroes, N);
        return v;
    }
};
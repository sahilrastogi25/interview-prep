class Solution {
public:
  void solve(vector<string>&v, string input, string output) {
    if (input.size() == 0) {
      v.push_back(output);
      return;
    }
    string op1 = output;
    string op2 = output;
    op2.push_back(' ');
    op2.push_back(input[0]);
    op1.push_back(input[0]);
    input.erase(input.begin());
    solve(v, input, op2);
    solve(v, input, op1);
    return;
  }
  vector<string> permutation(string S) {
    // Code Here
    vector<string>v;
    string output = "";
    output.push_back(S[0]);
    S.erase(S.begin());
    solve(v, S, output);
    return v;
  }
};
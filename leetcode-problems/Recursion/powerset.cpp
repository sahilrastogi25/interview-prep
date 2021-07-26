class Solution {
public:
	void solve(vector<string>&v, string input, string output) {
		if (input.length() == 0) {
			v.push_back(output);
			return;
		}
		string op1 = output;
		string op2 = output;
		op2.push_back(input[0]);
		input.erase(input.begin());
		solve(v, input, op1);
		solve(v, input, op2);
		return;
	}
	vector<string> AllPossibleStrings(string s) {
		// Code here
		string output;
		string input = s;
		vector<string>v;
		solve(v, input, output);
		sort(v.begin(), v.end());
		return v;
	}
};
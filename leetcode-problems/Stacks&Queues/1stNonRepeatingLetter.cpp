class Solution {
public:
	string FirstNonRepeating(string s) {
		// Code here
		queue<char>q;
		unordered_map<char, int>ump;
		string ans;
		for (char ch : s) {
			ump[ch]++;
			if (ump[ch] == 1) {
				q.push(ch);
			}
			while (!q.empty()) {
				if (ump[q.front()] > 1) {
					q.pop();
				} else {
					ans.push_back(q.front());
					break;
				}
			}
			if (q.empty()) {
				ans.push_back('#');
			}
		}
		return ans;
	}
};
void reverseEveryWordInaString(string s) {
	stringstream ss(s);
	string token;
	vector<string>tokens;
	vector<string>newTokens;
	while (getline(ss, token, ' ')) {
		tokens.push_back(token);
	}
	for (auto str : tokens) {
		reverse(str.begin(), str.end());
		newTokens.push_back(str);
	}
	for (string s : newTokens) {
		cout << s << " " ;
	}
}

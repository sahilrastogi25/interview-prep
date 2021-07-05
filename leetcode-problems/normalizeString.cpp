string normalize(const string &sentence) {
	string copy = sentence;
	//Make the changes in copy, and return it
	if (copy.size() == 1) {
		char ch = copy[0];
		if (ch >= 65) {
			ch += 32;
			copy = ch;
			return copy;
		} else {
			ch = toupper(ch);
			copy = ch;
			return copy;
		}
	}
	stringstream ss(copy);
	string token;
	string result;
	vector<string>tokens;
	while (getline(ss, token, ' ')) {
		if (token[0] >= 97) {
			token[0] -= 32;
		}
		for (int i = 1; i < token.size(); i++) {
			if (token[i] <= 90 and token[i] >= 65) {
				token[i] += 32;
			}
		}
		tokens.push_back(token);
	}
	for (string s : tokens) {
		result = result + s + ' ';
	}
	return result;
}
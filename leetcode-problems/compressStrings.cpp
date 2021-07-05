string compressString(const string &str) {
	string result;
	map<char, int>mp;
	for (char ch : str) {
		mp[ch]++;
	}
	for (auto x : mp) {
		result += x.first;
		result += to_string(x.second);
	}
	if (result.length() < str.length()) {
		return result;
	}
	return str;
}
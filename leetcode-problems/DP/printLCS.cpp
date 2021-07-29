string printLCS(string a, string b, int n, int m) {
	string s;
	int i = n;
	int j = m;
	while (i > 0 and j > 0) {
		if (a[i - 1] == b[j - 1]) {
			s.pb(a[i - 1]);
			i--;
			j--;
		}
		else {
			if (t[i][j - 1] > t[i - 1][j]) {
				j--;
			} else {
				i--;
			}
		}
	}
	reverse(s.begin(), s.end());
	return s;
}
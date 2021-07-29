//Top-Down Approach
int LCS(string& a, string& b, int n, int m, vector<vector<int>>&dp) {
	if (n == 0 or m == 0) {
		return 0;
	}
	if (dp[n][m] != -1) {
		return dp[n][m];
	}
	if (a[n - 1] == b[m - 1]) {
		dp[n][m] = 1 + LCS(a, b, n - 1, m - 1, dp);
	}
	else {
		dp[n][m] = max(LCS(a, b, n - 1, m, dp), LCS(a, b, n, m - 1, dp));
	}
	return dp[n][m];
}
int longestCommonSubsequence(string text1, string text2) {
	int n = text1.size();
	int m = text2.size();
	vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
	return LCS(text1, text2, n, m, dp);
}

//Bottom-up Approach

int dp[1001][1001];
int LCS(string& a, string& b, int n, int m) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 or j == 0) {
				dp[i][j] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}
	return dp[n][m];
}
int longestCommonSubsequence(string text1, string text2) {
	int n = text1.size();
	int m = text2.size();
	return LCS(text1, text2, n, m);
}

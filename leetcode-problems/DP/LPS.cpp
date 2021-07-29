int dp[1001][1001];
int LCS(string a, string b, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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
int longestPalindromeSubseq(string s) {
    string t = s;
    int n = s.size();
    reverse(s.begin(), s.end());
    return LCS(s, t, n, n);
}
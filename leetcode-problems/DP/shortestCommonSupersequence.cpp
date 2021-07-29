int dp[101][101];
//Function to find length of shortest common supersequence of two strings.
int LCS(string a, string b, int n, int m) {
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
int shortestCommonSupersequence(string X, string Y, int m, int n)
{
    //code here
    int lcs = LCS(X, Y, m, n);
    int ans = m + n - lcs;
    return ans;

}
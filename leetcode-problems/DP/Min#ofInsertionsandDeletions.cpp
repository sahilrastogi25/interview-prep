int dp[1001][1001];
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
public:
int minOperations(string str1, string str2)
{
    // Your code goes here
    int n = str1.size();
    int m = str2.size();
    int lcs = LCS(str1, str2, n, m);
    int insertion = m - lcs;
    int deletion = n - lcs;
    int ans = insertion + deletion;
    return ans;
}
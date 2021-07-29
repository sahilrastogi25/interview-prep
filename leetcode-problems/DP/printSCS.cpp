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
string shortestCommonSupersequence(string a, string b) {
    string s;
    int n = a.size();
    int m = b.size();
    LCS(a, b, n, m);
    int i = n;
    int j = m;
    while (i > 0 and j > 0) {
        if (a[i - 1] == b[j - 1]) {
            s.push_back(a[i - 1]);
            i--;
            j--;
        }
        else {
            if (dp[i][j - 1] > dp[i - 1][j]) {
                s.push_back(b[j - 1]);
                j--;
            } else {
                s.push_back(a[i - 1]);
                i--;
            }
        }
    }
    if (i == 0 and j != 0) {
        while (j > 0) {
            s.push_back(b[j - 1]);
            j--;
        }
    }
    if (j == 0 and i != 0) {
        while (i > 0) {
            s.push_back(a[i - 1]);
            i--;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
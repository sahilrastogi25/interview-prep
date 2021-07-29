int longestCommonSubstr (string S1, string S2, int n, int m)
{
    // your code here
    int t[n + 1][m + 1];
    int mx = INT_MIN;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 or j == 0) {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (S1[i - 1] == S2[j - 1]) {
                t[i][j] = 1 + t[i - 1][j - 1];
            } else {
                t[i][j] = 0;
            }
            mx = max(mx, t[i][j]);
        }
    }
    return mx;
}
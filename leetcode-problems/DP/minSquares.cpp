int solve(vector<int>&v, int n, int sum) {
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j == 0) {
                dp[i][j] = 0;
            }
            if (i == 0) {
                dp[i][j] = INT_MAX - 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            ;
            if (v[i - 1] <= j) {
                dp[i][j] = min(1 + dp[i][j - v[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[n][sum] == INT_MAX - 1) {
        return 0;
    }
    return dp[n][sum];
}
int MinSquares(int sum) {
    if (n == 0) {
        return 0;
    }
    vector<int>v;
    int k = sqrt(n);
    for (int i = 1; i <= k; i++) {
        v.push_back(i * i);
    }
    if (v.back() == sum) {
        return 1;
    }
    return solve(v, v.size(), sum);
}
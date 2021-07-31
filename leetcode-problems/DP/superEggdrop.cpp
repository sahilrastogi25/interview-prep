int dp[101][10001];
int solve(int e, int n) {
    if (n == 1 or n == 0) {
        return n;
    }
    if (e == 1) {
        return n;
    }
    if (dp[e][n] != -1) {
        return dp[e][n];
    }
    int mn = INT_MAX;
    int left = 1;
    int right = n;
    int Lr, Rr;
    while (left <= right) {
        int k = left + (right - left) / 2;
        Lr = solve(e - 1, k - 1);
        Rr = solve(e, n - k);
        int temp = 1 + max(Lr, Rr);
        mn = min(temp, mn);
        if (Lr > Rr) {
            right = k - 1;
        } else {
            left = k + 1;
        }
    }
    return dp[e][n] = mn;
}
int superEggDrop(int e, int n) {
    memset(dp, -1, sizeof dp);
    return solve(e, n);
}
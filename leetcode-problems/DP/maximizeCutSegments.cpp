int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    int dp[4][n + 1];
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = INT_MIN;
            }
        }
    }
    int arr[] = {x, y, z};
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= arr[i - 1]) {
                dp[i][j] = max(1 + dp[i][j - arr[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[3][n] < 0) {
        return 0;
    }
    return dp[3][n];
}
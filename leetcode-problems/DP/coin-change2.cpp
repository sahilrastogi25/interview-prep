int dp[1001][1001];
int minCoins(int coins[], int n, int sum)
{
	// Your code goes here
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0) {
				dp[i][j] = INT_MAX - 1;
			}
			else if (j == 0) {
				dp[i][j] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (coins[i - 1] <= j) {
				dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	if (dp[n][sum] == INT_MAX - 1) {
		return -1;
	}
	return dp[n][sum];
}
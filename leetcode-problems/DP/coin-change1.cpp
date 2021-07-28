long long dp[1001][1001];
class Solution
{
public:
    long long int count( int S[], int n, int sum )
    {

        //code here.
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (i == 0) {
                    dp[i][j] = 0;
                }
                if (j == 0) {
                    dp[i][j] = 1;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (S[i - 1] <= j) {
                    dp[i][j] = dp[i][j - S[i - 1]] + dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][sum];
    }
};
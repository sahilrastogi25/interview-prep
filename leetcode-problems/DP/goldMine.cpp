/*
Start from the last column and calculate what  is the max gold i can collect from that point
We will get the answer at the first column
*/

int dp[51][51];
class Solution {
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        if (n == 1) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += M[0][j];
            }
            return sum;
        }
        for (int j = m - 1; j >= 0; j--) {
            for (int i = 0; i < n; i++) {
                if (j == m - 1) {
                    dp[i][j] = M[i][j];
                }
                else if (i == 0) {
                    dp[i][j] = M[i][j] + max(dp[i + 1][j + 1], dp[i][j + 1]);
                }
                else if (i == n - 1) {
                    dp[i][j] = M[i][j] + max(dp[i - 1][j + 1], dp[i][j + 1]);
                }
                else {
                    dp[i][j] = M[i][j] + max(dp[i + 1][j + 1], max(dp[i][j + 1], dp[i - 1][j + 1]));
                }
            }
        }
        int mx = dp[0][0];
        for (int i = 1; i < n; i++) {
            mx = max(dp[i][0], mx);
        }
        return mx;
    }
};
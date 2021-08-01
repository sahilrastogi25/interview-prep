//Top-down
int dp[101][101];
class Solution {
public:
    int solve(int i, int j, int m, int n) {
        if (i >= m or j >= n) {
            return 0;
        }
        if (i == m - 1 and j == n - 1) {
            return 1;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        return dp[i][j] = solve(i + 1, j, m, n) + solve(i, j + 1, m, n);
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof dp);
        int i = 0;
        int j = 0;
        return solve(i, j, m, n);
    }
};

//Bottom-up

int dp[101][101];
class Solution {
public:
    int solve(int m, int n) {
        for (int i = m; i >= 1; i--) {
            for (int j = n; j >= 1; j--) {
                if (i == m and j == n) {
                    dp[i][j] = 1;
                }
                else {
                    int op1 = i == m ? 0 : dp[i + 1][j];
                    int op2 = j == n ? 0 : dp[i][j + 1];
                    dp[i][j] = op1 + op2;
                }
            }
        }
        return dp[1][1];
    }
    int uniquePaths(int m, int n) {
        return solve(m, n);
    }
};
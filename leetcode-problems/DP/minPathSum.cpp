int dp[201][201];
class Solution {
public:
    int minPathSum(vector<vector<int>>&grid) {
        int R = grid.size();
        int C = grid[0].size();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (i == 0 and j == 0) {
                    dp[i][j] = grid[i][j];
                } else {
                    dp[i][j] = grid[i][j] + min((i == 0 ? INT_MAX : dp[i - 1][j]), (j == 0 ? INT_MAX : dp[i][j - 1]));
                }
            }
        }
        return dp[R - 1][C - 1];
    }
};
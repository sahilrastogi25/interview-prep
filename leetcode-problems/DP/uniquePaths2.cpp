int dp[101][101];
class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>>&grid) {
        //we moved out of the grid
        if (i >= m or j >= n) {
            return 0;
        }
        if (grid[i][j] == 1) {
            return dp[i][j] = 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        // we are at the desired position
        if (i == m - 1 and j == n - 1) {
            return 1;
        }
        return dp[i][j] = solve(i + 1, j, m, n, grid) + solve(i, j + 1, m, n, grid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        memset(dp, -1, sizeof dp);
        //if the desired position is blocked then we can never reach there
        if (obstacleGrid[m - 1][n - 1]) {
            return 0;
        }
        int i = 0;
        int j = 0;
        return solve(i, j, m, n, obstacleGrid);
    }
};
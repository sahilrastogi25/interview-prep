class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;
        for (int i = 0; i <= n - 1; i++) {
            for (int j = 0; j <= m - 1; j++) {
                if (grid[i][j] == 1) {
                    sum += (i == 0 || grid[i - 1][j] == 0 ? 1 : 0);
                    sum += (i == n - 1 || grid[i + 1][j] == 0 ? 1 : 0);
                    sum += (j == 0 || grid[i][j - 1] == 0 ? 1 : 0);
                    sum += (j == m - 1 || grid[i][j + 1] == 0 ? 1 : 0);
                }
            }
        }
        return sum;
    }
};
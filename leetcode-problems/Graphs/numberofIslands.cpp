/*
Here the idea is to make a dfs call for all the islands possible and check whether
we can find an island in all direction so that we don't count it multiple times
One important thing was that here in the base case it is important that the condition
of i<0 or j<0 comes first because if not it can lead to segmentation fault.
*/
void dfs(int i, int j, vector<vector<char>>&grid, vector<vector<int>>&vis) {
    if (i<0 or j<0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == '0' or vis[i][j] == 1) {
        return;
    }
    vis[i][j] = 1;
    dfs(i + 1, j, grid, vis);
    dfs(i - 1, j, grid, vis);
    dfs(i - 1, j + 1, grid, vis);
    dfs(i, j + 1, grid, vis);
    dfs(i + 1, j - 1, grid, vis);
    dfs(i + 1, j + 1, grid, vis);
    dfs(i, j - 1, grid, vis);
    dfs(i - 1, j - 1, grid, vis);
}
int numIslands(vector<vector<char>>& grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>vis(n, vector<int>(m, 0));
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] and grid[i][j] == '1') {
                dfs(i, j, grid, vis);
                count++;
            }
        }
    }
    return count;
}
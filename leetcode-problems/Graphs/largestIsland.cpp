/*
Just a small modification of number of islands problem
Here we need to keep a track of the count for every island so we pass it by reference
*/
void dfs(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis, int&cnt) {
    if (i<0 or j<0 or i >= grid.size() or j >= grid[0].size() or vis[i][j] == 1 or grid[i][j] == 0) {
        return;
    }
    vis[i][j] = 1;
    cnt++;
    dfs(i + 1, j, grid, vis, cnt);
    dfs(i - 1, j, grid, vis, cnt);
    dfs(i - 1, j + 1, grid, vis, cnt);
    dfs(i, j + 1, grid, vis, cnt);
    dfs(i + 1, j - 1, grid, vis, cnt);
    dfs(i + 1, j + 1, grid, vis, cnt);
    dfs(i, j - 1, grid, vis, cnt);
    dfs(i - 1, j - 1, grid, vis, cnt);
}
int findMaxArea(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>vis(n, vector<int>(m, 0));
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            if (!vis[i][j] and grid[i][j] == 1) {
                dfs(i, j, grid, vis, cnt);
            }
            mx = max(mx, cnt);
        }
    }
    return mx;
}
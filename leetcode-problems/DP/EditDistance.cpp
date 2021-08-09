/*
TC: O(m*n)
Here if it would have been only insertion and deletion allowed then it could have been solved easily
using LCS but due to replace we are unable to do it.
So in that case just creating a table made it clear on what would be the base case and
the condition for a match and not a match
*/

int dp[501][501];
int EditDistance(string& s1, string& s2, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 or j == 0) {
                dp[i][j] = i + j;
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }
    return dp[m][n];
}
int minDistance(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    int ans = EditDistance(s1, s2, m, n);
    return ans;
}
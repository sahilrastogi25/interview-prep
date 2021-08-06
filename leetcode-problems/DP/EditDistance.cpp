int dp[501][501];
class Solution {
private:
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
public:
    int minDistance(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        int ans = EditDistance(s1, s2, m, n);
        return ans;
    }
};
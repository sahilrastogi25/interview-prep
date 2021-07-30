int dp[2][201][201];
int solve(string S, int i, int j, bool X) {
    if (i >= j) {
        if (X) {
            dp[1][i][j] = S[i] == 'T' ? 1 : 0;
        } else {
            dp[0][i][j] = S[i] == 'F' ? 1 : 0;
        }
        return dp[X][i][j];
    }
    if (dp[X][i][j] != -1) {
        return dp[X][i][j];
    }
    int ans = 0;
    for (int k = i + 1; k <= j - 1; k += 2) {
        int LT = solve(S, i, k - 1, true);
        int LF = solve(S, i, k - 1, false);
        int RT = solve(S, k + 1, j, true);
        int RF = solve(S, k + 1, j, false);

        if (S[k] == '&') {
            if (X) {
                ans += (LT * RT);
            } else {
                ans += (LT * RF + RT * LF + LF * RF);
            }
        }
        if (S[k] == '|') {
            if (X) {
                ans += (LT * RT + LT * RF + LF * RT);
            } else {
                ans += (LF * RF);
            }
        }
        if (S[k] == '^') {
            if (X) {
                ans += (LT * RF + RT * LF);
            } else {
                ans += (LT * RT + LF * RF);
            }
        }
    }
    dp[X][i][j] = ans;
    return ans;
}
int countWays(int N, string S) {
    // code here
    memset(dp, -1, sizeof dp);
    int ans = solve(S, 0, N - 1, true);
    return ans;
}
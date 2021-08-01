int dp[31][1001];
int mod = 1e9 + 7;
class Solution {
private:
    int solve(int d, int f, int target) {
        if (d == 0 and target == 0) {
            return 1;
        }
        if (d == 0 or target == 0) {
            return 0;
        }
        if (dp[d][target] != -1) {
            return dp[d][target];
        }
        int count = 0;
        for (int i = 1; i <= f and i <= target; i++) {
            count = (count + solve(d - 1, f, target - i)) % mod;
        }
        return dp[d][target] = count;
    }
public:
    int numRollsToTarget(int d, int f, int target) {
        memset(dp, -1, sizeof dp);
        return solve(d, f, target);
    }
};
/*
Key Understanding- Here it is important to understand what does the smallest dp cell represent
i.e what are we storing in our dp array.Once that is done we can think of various situations
that can occur while travelling and solve accordingly
*/
int dp[10001];
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        dp[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            int steps = nums[i];
            int mn = INT_MAX;
            for (int j = 1; j <= steps and i + j < n; j++) {
                if (dp[i + j] != INT_MAX and dp[i + j] < mn) {
                    mn = dp[i + j];
                }
            }
            if (mn != INT_MAX) {
                dp[i] = 1 + mn;
            }
            else {
                dp[i] = INT_MAX;
            }
        }
        return dp[0];
    }
};
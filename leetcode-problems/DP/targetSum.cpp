class Solution {
public:
    int t[21][1001];
    int countOfsubsetSum(vector<int> nums, int target, int n) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (i == 0) {
                    t[i][j] = 0;
                }
                if (j == 0) {
                    t[i][j] = 1;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (nums[i - 1] <= j) {
                    t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];
                }
                else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        return t[n][target];

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for (int x : nums) {
            sum += x;
        }
        if (target > sum) return 0;
        int x = target + sum;
        if (x % 2 != 0) return 0;
        return countOfsubsetSum(nums, x / 2, n);
    }
};
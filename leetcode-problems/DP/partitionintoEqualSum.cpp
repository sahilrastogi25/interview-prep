class Solution {
public:
  bool t[201][20001];
  bool isSubsetSum(int n, vector<int>&arr, int sum) {
    // code here
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= sum; j++) {
        if (i == 0) {
          t[i][j] = false;
        }
        if (j == 0) {
          t[i][j] = true;
        }
      }
    }
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= sum; j++) {
        if (arr[i - 1] <= j) {
          t[i][j] = t[i - 1][j] or t[i - 1][j - arr[i - 1]];
        } else {
          t[i][j] = t[i - 1][j];
        }
      }
    }
    return t[n][sum];
  }
  bool canPartition(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    for (int x : nums) {
      sum += x;
    }
    if (sum % 2 != 0) {
      return false;
    }
    return isSubsetSum(n, nums, sum / 2);
  }
};
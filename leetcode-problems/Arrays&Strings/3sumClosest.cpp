int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    if (n < 3) return 0;
    int mn = nums[0] + nums[1] + nums[2]; //used for reference initially
    sort(nums.begin(), nums.end());
    for (int i = 0; i <= n - 3; i++) {
        if (i > 0 and nums[i] == nums[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) {
                return sum;
            }
            if (abs(target - mn) > abs(target - sum)) {
                mn = sum;
            }
            if (sum > target) {
                k--;
            } else {
                j++;
            }
        }
    }
    return mn;
}
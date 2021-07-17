class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        int n = nums.size();
        if (n == 1) return nums[0];
        for (int x : nums) {
            sum += x;
            if (sum < 0) {
                sum = 0;
            }
            ans = max(ans, sum);
        }
        if (sum == 0 and ans == 0) {
            int k = INT_MIN;
            for (int y : nums) {
                k = max(y, k);
            }
            return k;
        }
        return ans;
    }
};
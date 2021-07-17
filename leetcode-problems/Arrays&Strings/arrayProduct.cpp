class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>output(n, 0);
        vector<int>right(n, 1);
        vector<int>left(n, 1);
        for (int i = n - 2; i >= 0; i--) {
            right[i] = nums[i + 1] * right[i + 1];
        }
        for (int i = 1; i <= n - 1; i++) {
            left[i] = nums[i - 1] * left[i - 1];
        }
        for (int i = 0; i < n; i++) {
            output[i] = left[i] * right[i];
        }
        return output;
    }
};
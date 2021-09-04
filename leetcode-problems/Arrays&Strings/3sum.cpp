class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>result;
        for (int i = 0; i <= n - 3; i++) {
            if (i >= 1 && (nums[i] == nums[i - 1]) )continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int curr_sum = nums[i];
                curr_sum += nums[j];
                curr_sum += nums[k];
                if (curr_sum == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    while (j + 1 < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    while (j < k - 1 && nums[k] == nums[k - 1]) {
                        k--;
                    }
                    j++;
                    k--;
                } else if (curr_sum > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return result;
    }
};
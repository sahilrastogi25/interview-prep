int longestSubarrayKSum(vector<int> nums, int k) {
    //Complete this function and return the length of longest subarray
    unordered_map<int, int>ump;
    ump.insert({0, -1});
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (ump.find(sum - k) != ump.end()) {
            int idx = ump[sum - k];
            int len = i - idx;
            if (len > ans) {
                ans = len;
            }
        } else {
            ump[sum] = i;
        }
    }
    return ans;
}
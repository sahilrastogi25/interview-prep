//O(NlogN)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int longest = 0;
        int cnt = 1;
        if (n == 1) return 1;
        if (n == 0) return 0;
        if (n > 1) {
            for (int i = 1; i <= n - 1;) {
                int last = nums[i - 1];
                if (nums[i] - last == 1) {
                    cnt++;
                    i++;
                }
                else if (nums[i] - last == 0) {
                    i++;
                }
                else {
                    cnt = 1;
                    i++;
                }
                longest = max(longest, cnt);
            }

        }
        return longest;
    }
};
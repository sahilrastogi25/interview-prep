class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int longest = 0;
        for (int i = 1; i <= n - 2;) {
            if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
                int cnt = 1;
                int j = i;
                while (j >= 1 and arr[j] > arr[j - 1]) {
                    j--;
                    cnt++;
                }
                while (i <= n - 2 and arr[i] > arr[i + 1]) {
                    i++;
                    cnt++;
                }
                longest = max(longest, cnt);
            } else {
                i++;
            }
        }
        return longest;
    }
};
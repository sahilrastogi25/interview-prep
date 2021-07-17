class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>umap;
        int i = 0;
        int j = 0;
        int window_len = 0;
        int max_window_len = 0;
        int n = s.size();
        while (j < n) {
            char ch = s[j];
            if (umap.count(ch) and umap[ch] >= i ) {
                i = umap[ch] + 1;
                window_len = j - i;
            }
            umap[ch] = j;
            window_len++;
            j++;
            if (window_len > max_window_len) {
                max_window_len = window_len;
            }
        }
        return max_window_len;
    }
};
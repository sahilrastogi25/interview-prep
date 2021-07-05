class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m == 0) {
            return 0;
        }
        int i = 0;
        int j = 0;
        while (i < n and j < m) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
                if (j == m) {
                    return i - m;
                }
            }
            else if (haystack[i] != needle[j]) {
                i = i - j + 1;
                j = 0;
            }
        }
        return -1;
    }
};
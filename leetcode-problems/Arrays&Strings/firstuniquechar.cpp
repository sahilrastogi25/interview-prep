class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        int n = s.length();
        int i = 0, j = 0;
        while (j < n) {
            mp[s[j]] += 1;
            j++;
        }
        while (i < n) {
            if (mp[s[i]] == 1) {
                return i;
            }
            i++;
        }
        return -1;
    }
};
class Solution {
public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int>mp;
        int j = 0;
        int i = 0;
        int n = s.size();
        int mx = INT_MIN;
        while (j < n) {
            char ch = s[j];
            mp[ch]++;
            if (mp.size() == k) {
                mx = max(j - i + 1, mx);
            }
            if (mp.size() > k) {
                while (mp.size() > k) {
                    mp[s[i]]--;
                    if (mp[s[i]] == 0) {
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        if (mx == INT_MIN) {
            return -1;
        }
        return mx;
    }
};
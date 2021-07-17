class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int p = s.size();
        int q = t.size();
        while (i < p and j < q) {
            if (s[i] == t[j]) {
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if (i == p) {
            return true;
        }
        return false;
    }
};
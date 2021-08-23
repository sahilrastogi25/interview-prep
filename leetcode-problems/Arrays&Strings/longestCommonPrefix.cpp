bool compare(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}
string longestCommonPrefix(vector<string>& strs) {
    string result;
    sort(strs.begin(), strs.end(), compare);
    int m = strs.size();
    int n = strs[0].size();
    for (int i = 0; i < n; i++) {
        int ch = strs[0][i];
        for (int j = 1; j < m; j++) {
            if (strs[j][i] != ch) {
                result = strs[0].substr(0, i);
                return result;
            }
        }
        result.push_back(ch);
    }
    return result;
}
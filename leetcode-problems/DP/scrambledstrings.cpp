/*
Here there are two chances whether they would have been swapped or not
and we check for both cases and if in any case we get true we return that answer.
Ex- great grtea
here at the first node no swapping took place
so the subproblem for no swap will return true at index 2
*/

unordered_map<string, bool>mp;
bool solve(string s1, string s2) {
    if (s1 == s2) {
        return true;
    }
    else if (s1.size() == 1) {
        return false;
    }
    string key = s1 + " " + s2;
    if (mp.find(key) != mp.end()) {
        return mp[key];
    }
    bool flag = false;
    bool c1, c2;
    int n = s1.size();
    for (int i = 1; i <= n - 1; i++) {
        bool c1 = solve(s1.substr(0, i), s2.substr(0, i)) && solve(s1.substr(i, n - i), s2.substr(i, n - i));
        bool c2 = solve(s1.substr(0, i), s2.substr(n - i, i)) && solve(s1.substr(i, n - i), s2.substr(0, n - i));
        if (c1 || c2) {
            flag = true;
            break;
        }
    }
    mp[key] = flag;
    return flag;
}
bool isScramble(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    if (s1.empty() and s2.empty()) {
        return true;
    }
    return solve(s1, s2);
}
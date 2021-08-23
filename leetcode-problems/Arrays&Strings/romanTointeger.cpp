int romanToInt(string s) {
    int ans = 0;
    map<char, int>mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    for (int i = 0; i < s.size(); i++) {
        if (i <= s.size() - 1 and mp[s[i]] < mp[s[i + 1]]) {
            ans -= mp[s[i]];
        } else {
            ans += mp[s[i]];
        }
    }
    return ans;
}
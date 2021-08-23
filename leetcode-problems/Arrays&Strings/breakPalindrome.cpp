string breakPalindrome(string s) {
    int n = s.size();
    // corner case-1 What if the size of string is 1
    if (n == 1) {
        return "";
    }
    for (int i = 0; i < n; i++) {
        int j = n / 2;
        // corner case-2 If the middle element is not 'a' then even changing
        // it to 'a' won't lead to successful result
        if (i == j) {
            continue;
        }
        else {
            if (s[i] != 'a') {
                s[i] = 'a';
                return s;
            }
        }
    }
    // corner case-3 what if all the elements are 'a' in the string
    s[n - 1] = 'b';
    return s;
}
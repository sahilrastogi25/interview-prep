/*

If further optimization is required then we can check whether solve(i,k) is known or not
and if not store it for further use
we can also see that we will get min if one side is palindrome so here we assumed to check for
right only if left is palindrome.

*/

int t[2001][2001];
bool isPalindrome(string& str, int i, int j) {
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++; j--;
    }
    return true;
}
int solve(string& str, int i, int j) {
    if (i >= j or isPalindrome(str, i, j)) {
        t[i][j] = 0;
        return 0;
    }
    if (t[i][j] != -1) {
        return t[i][j];
    }
    int minAns = INT_MAX;
    for (int k = i; k < j; k++) {
        if (isPalindrome(str, i, k)) {
            int temp = 1 + solve(str, k + 1, j);
            minAns = min(minAns, temp);
        }
    }
    return t[i][j] = minAns;
}
int minCut(string str) {
    memset(t, -1, sizeof(t));
    int n = str.size();
    int ans = solve(str, 0, n - 1);
    return ans;
}
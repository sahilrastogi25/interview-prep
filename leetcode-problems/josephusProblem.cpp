class Solution {
public:
    void solve(int index, int k, vector<int>&v, int&ans) {
        int n = v.size();
        if (n == 1) {
            ans = v[0];
            return;
        }
        index = (index + k) % n;
        v.erase(v.begin() + index);
        solve(index, k, v, ans);
    }
    int findTheWinner(int n, int k) {
        int ans = -1;
        vector<int>v;
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        int index = 0;
        k--;
        solve(index, k, v, ans);
        return ans;
    }
};
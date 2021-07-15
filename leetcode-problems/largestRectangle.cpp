vector<int>NSL(vector<int>&h, int n) {
    stack<pair<int, int>>s1;
    vector<int>left;
    for (int i = 0; i < n; ++i) {
        if (s1.empty()) {
            left.push_back(-1);
            s1.push({h[i], i});
            continue;
        } else {
            while (!s1.empty()) {
                pair<int, int>data = s1.top();
                if (data.first < h[i]) {
                    left.push_back(data.second);
                    s1.push({h[i], i});
                    break;
                } else {
                    s1.pop();
                }
            }
            if (s1.empty()) {
                left.push_back(-1);
                s1.push({h[i], i});
            }
        }
    }
    return left;
}
vector<int>NSR(vector<int>&h, int n) {
    stack<pair<int, int>>s2;
    vector<int>right;
    for (int i = n - 1; i >= 0; --i) {
        if (s2.empty()) {
            right.push_back(n);
            s2.push({h[i], i});
            continue;
        } else {
            while (!s2.empty()) {
                pair<int, int>data = s2.top();
                if (data.first < h[i]) {
                    right.push_back(data.second);
                    s2.push({h[i], i});
                    break;
                } else {
                    s2.pop();
                }
            }
            if (s2.empty()) {
                right.push_back(n);
                s2.push({h[i], i});
            }
        }
    }
    reverse(right.begin(), right.end());
    return right;
}
int largestRectangleArea(vector<int>& h) {
    int n = h.size();
    vector<int>left = NSL(h, n);
    vector<int>right = NSR(h, n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int ans = (right[i] - left[i]) - 1;
        cout << ans << " ";
        mx = max(mx, ans * h[i]);
    }
    return mx;
}
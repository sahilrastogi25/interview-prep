class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        vector<int>ans;
        stack<int>s;
        int n = v.size();
        for (int i = n - 1; i >= 0; i--) {
            s.push(v[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s.empty()) {
                ans.push_back(-1);
                s.push(v[i]);
            } else {
                while (!s.empty()) {
                    if (s.top() > v[i]) {
                        ans.push_back(s.top());
                        s.push(v[i]);
                        break;
                    } else if (s.top() <= v[i]) {
                        s.pop();
                    }
                }
                if (s.empty()) {
                    ans.push_back(-1);
                    s.push(v[i]);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
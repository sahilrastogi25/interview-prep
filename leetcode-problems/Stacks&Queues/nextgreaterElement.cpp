class Solution
{
public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> v, int n) {
        // Your code here
        vector<long long>ans;
        stack<long long>s;
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
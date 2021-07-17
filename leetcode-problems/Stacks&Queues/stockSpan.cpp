class Solution
{
public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        // Your code here
        stack<pair<int, int>>s;
        vector<int>v;
        vector<int>ans;
        for (int i = 0; i < n; i++) {
            if (s.empty()) {
                v.push_back(-1);
            }
            else {
                while (!s.empty()) {
                    pair<int, int> data = s.top();
                    if (data.first > price[i]) {
                        v.push_back(data.second);
                        break;
                    } else {
                        s.pop();
                    }
                }
                if (s.empty()) {
                    v.push_back(-1);
                }
            }
            s.push({price[i], i});
        }
        for (int i = 0; i < n; i++) {
            ans.push_back(i - v[i]);
        }
        return ans;
    }
};
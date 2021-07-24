class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>>maxh;
        vector<vector<int>>result;
        for (auto x : points) {
            int dist = pow(x[0], 2) + pow(x[1], 2);
            maxh.push({dist, {x[0], x[1]}});
            if (maxh.size() > k) {
                maxh.pop();
            }
        }
        while (!maxh.empty()) {
            pair<int, int>p = maxh.top().second;
            result.push_back({p.first, p.second});
            maxh.pop();
        }
        return result;
    }
};
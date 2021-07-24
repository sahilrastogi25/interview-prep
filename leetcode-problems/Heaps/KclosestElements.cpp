class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>>maxh;
        vector<int>result;
        for (int num : arr) {
            maxh.push(make_pair(abs(x - num), num));
            if (maxh.size() > k) {
                maxh.pop();
            }
        }
        while (!maxh.empty()) {
            pair<int, int>p1 = maxh.top();
            maxh.pop();
            result.push_back(p1.second);
        }
        return result;
    }
};
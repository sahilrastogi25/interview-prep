bool compare(const pair<int, int>&p1, const pair<int, int>&p2) {
    return p1.first < p2.first;
}
int maxIndexDiff(int arr[], int N)
{
    vector<pair<int, int>>v;
    vector<int>index;
    for (int i = 0; i < N; i++) {
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++) {
        index.push_back(v[i].second);
    }
    int ans = INT_MIN;
    int min_index = INT_MAX;
    for (int i = 0; i < N; i++) {
        min_index = min(index[i], min_index);
        ans = max(ans, index[i] - min_index);
    }
    return ans;
}
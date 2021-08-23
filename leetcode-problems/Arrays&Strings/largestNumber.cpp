bool compare(const string& s1, const string& s2) {
    return s1 + s2 > s2 + s1;
}

string concatenate(vector<int> nums) {
    vector<string>arr;
    for (int x : nums) {
        arr.push_back(to_string(x));
    }
    sort(arr.begin(), arr.end(), compare);
    string result;
    for (auto x : arr) {
        result += x;
    }
    // very important corner case [0,0,0] ans should be 0 and not 000
    while (result[0] == '0' and result.size() > 1) {
        result.erase(result.begin());
    }
    return result;
}
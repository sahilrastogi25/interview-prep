bool compare(const string& s1, const string& s2) {
    return s1 + s2 > s2 + s1;
}

string concatenate(vector<int> nums) {
    //complete this method and return the largest number you can form as a string
    vector<string>arr;
    for (int x : nums) {
        arr.push_back(to_string(x));
    }
    sort(arr.begin(), arr.end(), compare);
    string result;
    for (auto x : arr) {
        result += x;
    }
    return result;
}
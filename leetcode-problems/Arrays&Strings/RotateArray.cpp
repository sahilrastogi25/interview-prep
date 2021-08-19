/*
Here the condition for what if K is greater than N is very important because
'i' would become -ve if not considered
*/

//First Approach(O(N) space and time)
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (k == n or k == 0) return;
    k %= n;
    vector<int>temp;
    for (int i = n - k; i < n; i++) {
        temp.push_back(nums[i]);
    }
    nums.erase(nums.begin() + n - k, nums.end());
    for (int i = 0; i < k; i++) {
        nums.insert(nums.begin() + i, temp[i]);
    }
}

//Better Approach(O(1) space and O(N) time)
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (k == n or k == 0) return;
    k %= n;
    for (int i = 1; i <= k; i++) {
        int temp = nums[n - 1];
        nums.insert(nums.begin(), temp);
        nums.pop_back();
    }
}
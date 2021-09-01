vector<int> searchRange(vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size() - 1;
    vector<int>ans(2, -1);
    //first occurence
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] > target) {
            e = mid - 1;
        }
        else if (nums[mid] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
            ans[0] = mid;
        }
    }
    s = 0;
    e = nums.size() - 1;
    //last occurence
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] > target) {
            e = mid - 1;
        }
        else if (nums[mid] < target) {
            s = mid + 1;
        }
        else {
            s = mid + 1;
            ans[1] = mid;
        }
    }
    return ans;
}
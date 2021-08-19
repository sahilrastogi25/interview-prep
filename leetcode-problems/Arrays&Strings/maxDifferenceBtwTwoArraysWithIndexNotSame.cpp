bool compare(pair<int, int>p1, pair<int, int>p2) {
	return p1.first < p2.first;
}
int maxDifference(vector<pair<int, int>>&nums1, vector<pair<int, int>>&nums2) {
	sort(nums1.begin(), nums1.end(), compare);
	sort(nums2.begin(), nums2.end(), compare);
	int n1 = nums1.size();
	int n2 = nums2.size();
	pair<int, int> max1 = nums1[n1 - 1];
	pair<int, int> max2 = nums1[n1 - 2];
	pair<int, int> min1 = nums2[0];
	pair<int, int> min2 = nums2[1];
	if (max1.second != min1.second) {
		return abs(max1.first - min1.first);
	}
	int ans = max(abs(max1.first - min2.first), abs(max2.first - min1.first));
	return ans;
}
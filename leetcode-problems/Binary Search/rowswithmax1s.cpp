int leftAns(vector<int>arr, int s, int e) {
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == 1) {
			ans = mid;
			e = mid - 1;
		} else if (arr[mid] == 0) {
			s = mid + 1;
		}
	}
	return ans;
}
int rightAns(vector<int>arr, int s, int e) {
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == 1) {
			ans = mid;
			s = mid + 1;
		} else if (arr[mid] == 0) {
			s = mid + 1;
		}
	}
	return ans;
}
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	// code here
	int ans = INT_MIN;
	int ansi = -1;
	int s = 0;
	int e = m - 1;
	for (int i = 0; i < n; i++) {
		if (rightAns(arr[i], s, e) == -1 and leftAns(arr[i], s, e) == -1) {
			continue;
		}
		else {
			int cnt = rightAns(arr[i], s, e) - leftAns(arr[i], s, e) + 1;
			if (cnt > ans) {
				ans = cnt;
				ansi = i;
			}
		}
	}
	return ansi;
}
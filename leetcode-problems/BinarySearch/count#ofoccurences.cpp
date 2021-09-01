int count(int arr[], int n, int x) {
	// code here
	int s = 0;
	int e = n - 1;
	vector<int>ans(2, -1);
	//first occurence
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == x) {
			ans[0] = mid;
			e = mid - 1;
		} else if (arr[mid] > x) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	s = 0; e = n - 1;
	//last occurence
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == x) {
			ans[1] = mid;
			s = mid + 1;
		} else if (arr[mid] > x) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	// if x does not exist in array then return 0
	return (ans[1] == -1) ? 0 : (ans[1] - ans[0]) + 1;
}
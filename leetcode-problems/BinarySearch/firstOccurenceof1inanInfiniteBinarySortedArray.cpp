int findPos(int arr[]) {
	int s = 0;
	int e = 1;
	int ans = -1;
	while (arr[e] < 1) {
		s = e;
		e *= 2;
	}
	//first occurence of 1
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] < 1) {
			s = mid + 1;
		} else {
			ans = mid;
			e = mid - 1;
		}
	}
	return ans;
}
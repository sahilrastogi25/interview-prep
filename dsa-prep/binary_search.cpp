int binarySearch(vector<int>&arr, int s, int e, int k) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == k) {
			return mid;
		} else if (arr[mid] > k) {
			return binarySearch(arr, s, mid - 1, k);
		} else {
			return binarySearch(arr, mid + 1, e, k);
		}
	}
	return -1;
}
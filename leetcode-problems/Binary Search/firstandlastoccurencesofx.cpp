int first(int arr[], int n, int k) {
	int s = 0;
	int e = n - 1;
	int result = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == k) {
			result = mid;
			e = mid - 1;
		}
		else if (arr[mid] > k) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return result;
}
int last(int arr[], int n, int k) {
	int s = 0;
	int e = n - 1;
	int result = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == k) {
			result = mid;
			s = mid + 1;
		}
		else if (arr[mid] > k) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return result;
}
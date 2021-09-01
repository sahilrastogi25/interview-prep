//if key is present then diff=0 else min(abs(ceil(key)-key),abs(floor(key)-key))
int findMinDifference(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			return 0;
		} else if (arr[mid] > key) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	if (s == n) {
		return abs(arr[e] - key);
	} else if (e == -1) {
		return abs(arr[s] - key);
	} else if (abs(arr[s] - key) > abs(arr[e] - key)) {
		return abs(arr[e] - key);
	}
	return abs(arr[s] - key);
}

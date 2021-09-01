//Here the main issue is our inability to figure out where to place the end pointer
int findPos(int arr[], int key) {
	int s = 0;
	int e = 1;
	while (key > arr[e]) {
		s = e;
		e *= 2;
	}
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			return mid;
		} else if (arr[mid] > key) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return -1;
}

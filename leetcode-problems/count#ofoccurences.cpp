class Solution {
public:
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int leftcount(int arr[], int n, int k) {
		int s = 0;
		int e = n - 1;
		int lcnt = -1;
		while (s <= e) {
			int mid = s + (e - s) / 2;
			if (arr[mid] == k) {
				lcnt = mid;
				e = mid - 1;
			}
			else if (arr[mid] > k) {
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}
		return lcnt;
	}
	int rightcount(int arr[], int n, int k) {
		int s = 0;
		int e = n - 1;
		int rcnt = -1;
		while (s <= e) {
			int mid = s + (e - s) / 2;
			if (arr[mid] == k) {
				rcnt = mid;
				s = mid + 1;
			}
			else if (arr[mid] > k) {
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}
		return rcnt;
	}
	int count(int arr[], int n, int x) {
		// code here
		int locc = leftcount(arr, n, x);
		int rocc = rightcount(arr, n, x);
		if (locc == -1) {
			return 0;
		}
		return rocc - locc + 1;
	}
};
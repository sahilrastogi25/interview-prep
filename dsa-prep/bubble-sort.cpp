//Worst-Case-O(N^2)
//Best-Case-O(N)- if there are no swaps done in the first pass that means each and every item
// is in it's correct location hence no further comparison needed.
void bubble_sort(int*arr, int n) {
	int flag = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				flag = 1;
			}
		}
		if (!flag) return;
	}
}
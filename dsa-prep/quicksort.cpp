int partition(vector<int>&a, int s, int e) {
	int pivot = a[e];
	int i = s - 1;
	for (int j = s; j < e; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[e]);
	return i + 1;
}
void quicksort(vector<int>&a, int s, int e) {
	if (s >= e) {
		return;
	}
	int p = partition(a, s, e);
	quicksort(a, s, p - 1);
	quicksort(a, p + 1, e);
}


int main()
{
	io();
	vector<int>a{10, 5, 2, 0, 7, 6, 4};
	quicksort(a, 0, a.size() - 1);
	for (int x : a) {
		cout << x << " ";
	}
	return 0;
}
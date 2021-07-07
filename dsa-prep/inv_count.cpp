int merge(vector<int>&arr, int s, int e) {
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;
	vector<int>temp;
	int cnt = 0;
	while (i <= m and j <= e) {
		if (arr[i] < arr[j]) {
			temp.push_back(arr[i++]);
		} else {
			cnt += m - i + 1;
			temp.push_back(arr[j++]);
		}
	}
	while (i <= m) {
		temp.push_back(arr[i++]);
	}
	while (j <= e) {
		temp.push_back(arr[j++]);
	}
	int k = 0;
	for (int i = s; i <= e; i++) {
		arr[i] = temp[k++];
	}
	return cnt;
}

int inv_count(vector<int>&arr, int s, int e) {
	if (s >= e) {
		return 0;
	}
	int mid = (s + e) / 2;
	int c1 = inv_count(arr, s, mid);
	int c2 = inv_count(arr, mid + 1, e);
	int ci = merge(arr, s, e);
	return c1 + c2 + ci;
}

int main()
{
	io();
	vector<int>arr{0, 1, 4, 3, 2};
	int s = 0;
	int e = arr.size() - 1;
	cout << inv_count(arr, s, e);
	return 0;
}
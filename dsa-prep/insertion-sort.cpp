#include <bits/stdc++.h>
using namespace std;
void io() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	io();
	int n; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		int val = arr[i];
		int j = i;
		while (j > 0 and arr[j - 1] > val) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = val;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ",";
	}
	return 0;
}
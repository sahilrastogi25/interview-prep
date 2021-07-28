bool t[11][100001];
vector<int>v;

bool isSubsetSum(int n, int arr[], int sum) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0) {
				t[i][j] = false;
			}
			if (j == 0) {
				t[i][j] = true;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j) {
				t[i][j] = t[i - 1][j] or t[i - 1][j - arr[i - 1]];
			} else {
				t[i][j] = t[i - 1][j];
			}
		}
	}
	for (int j = 0; j <= sum; j++) {
		if (t[n][j]) {
			v.push_back(j);
		}
	}
	return t[n][sum];
}
int minDifference(int arr[], int n)  {
	// Your code goes here
	int sum = 0;
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	isSubsetSum(n, arr, sum);
	for (int x : v) {
		mn = min(mn, abs(sum - 2 * x));
	}
	return mn;
}

vector<int>Ksorted(vector<int>arr, int k) {
	vector<int>result;
	pqivigi minh;
	for (int x : arr) {
		minh.push(x);
		if (minh.size() > k) {
			result.pb(minh.top());
			minh.pop();
		}
	}
	while (!minh.empty()) {
		result.pb(minh.top());
		minh.pop();
	}
	return result;
}
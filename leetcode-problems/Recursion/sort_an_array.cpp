void insert(vector<int>&arr, int temp) {
	if (arr.size() == 0 or arr[arr.size() - 1] <= temp) {
		arr.pb(temp);
		return;
	}
	int last = arr[arr.size() - 1];
	arr.pop_back();
	insert(arr, temp);
	arr.pb(last);
	return;
}

void sort_array(vector<int>&ans) {
	if (ans.size() == 1) {
		return;
	}
	int num = ans[ans.size() - 1];
	ans.pop_back();
	sort_array(ans);
	insert(ans, num);
	return;
}

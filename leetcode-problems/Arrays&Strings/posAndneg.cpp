void posAndNeg(vector<int>&nums) {
	int n = nums.size();
	vector<int>temp1, temp2;
	for (int x : nums) {
		if (x >= 0) {
			temp1.push_back(x);
		} else {
			temp2.push_back(x);
		}
	}
	nums.clear();
	int i = 0, j = 0;
	while (i < temp1.size() and j < temp2.size()) {
		nums.push_back(temp1[i]);
		nums.push_back(temp2[j]);
		i++;
		j++;
	}
	while (i < temp1.size()) {
		nums.push_back(temp1[i]);
		i++;
	}
	while (j < temp2.size()) {
		nums.push_back(temp2[j]);
		j++;
	}
}
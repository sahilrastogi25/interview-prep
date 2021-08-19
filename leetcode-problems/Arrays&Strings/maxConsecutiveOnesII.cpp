/*
The first function is going to get max consecutive ones in a sequence
we just have to find what sequence will give the best answer
*/
int findMaxConsecutiveOnes(vector<int>& arr) {
	int mx = 0;
	int ans = 0;
	for (int x : arr) {
		if (x == 1) {
			ans++;
			mx = max(ans, mx);
		}
		else {
			ans = 0;
		}
	}
	return mx;
}
int findMCO(vector<int>&nums) {
	int ans = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 0) {
			nums[i] = 1;
			ans = max(findMaxConsecutiveOnes(nums), ans);
			nums[i] = 0;
		}
	}
	return ans;
}
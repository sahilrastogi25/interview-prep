double mySqrt(int x, int p) {
	int s = 0;
	int e = x;
	double ans;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (mid * mid == x) {
			return mid;
		} else if (mid * mid > x) {
			e = mid - 1;
		} else {
			ans = mid;
			s = mid + 1;
		}
	}
	double inc = 0.1;
	ans += inc;
	for (int i = 0; i < p; i++) {
		while (ans * ans <= x) {
			ans += inc;
		}
		ans -= inc;
		inc = inc / 10;
	}
	return ans;
}

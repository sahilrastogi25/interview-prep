int stoi(string str)
{
	//Your code here
	int n = str.size();
	int ans = 0;
	int p = 0;
	for (int i = n - 1; i >= 0; i--) {
		int x = str[i] - '0';
		if (x > 9) {
			return -1;
		}
		if (x < 0) {
			ans -= 2 * ans;
			return ans;
		}
		ans += x * pow(10, p);
		p++;
	}
	return ans;
}
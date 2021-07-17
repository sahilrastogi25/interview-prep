class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		int mid = floor(n / 2);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				int temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < mid; j++) {
				swap(matrix[i][j], matrix[i][n - j - 1]);
			}
		}
	}
};
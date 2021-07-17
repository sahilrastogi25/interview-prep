class Solution {
public:
	bool searchMatrix(vector<vector<int>>& mat, int x) {
		int n = mat.size();
		int m = mat[0].size();
		int i = 0;
		int j = m - 1;
		while (i >= 0 and i <= n - 1 and j >= 0 and j <= m - 1) {
			if (mat[i][j] == x) {
				return true;
			}
			else if (mat[i][j] > x) {
				j--;
			}
			else if (mat[i][j] < x) {
				i++;
			}
		}
		return false;
	}
};
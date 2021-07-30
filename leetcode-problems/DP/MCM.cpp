/*

4
40 20 30 10
A1 - 40X20
A2 - 20X30
A3 - 30X10

i - A1
j - A3

Move i from A1 to A2 and not A3 bcz there will be no matrix left

*/

int t[101][101];
int solve(int arr[], int i, int j) {
    if (i >= j) {
        return t[i][j] = 0;
    }
    if (t[i][j] != -1) {
        return t[i][j];
    }
    int ans = INT_MAX;
    for (int k = i; k <= j - 1; k++) {
        int temp = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[j] * arr[k];
        ans = min(ans, temp);
    }
    return t[i][j] = ans;
}
int matrixMultiplication(int N, int arr[])
{
    int i = 1;
    int j = N - 1;
    memset(t, -1, sizeof(t));
    return solve(arr, i, j);
}
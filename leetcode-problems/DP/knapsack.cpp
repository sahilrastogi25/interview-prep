int t[1001][1001];
//Function to return max value that can be put in knapsack of capacity W.
int knapSack(int w, int wt[], int val[], int n)
{
    // Your code here
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (i == 0 or j == 0) {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (wt[i - 1] <= j) {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
            else if (wt[i - 1] > j) {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
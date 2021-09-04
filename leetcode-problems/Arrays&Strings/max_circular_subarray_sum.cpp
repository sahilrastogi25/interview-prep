int kadaneAlgo(int arr[], int n) {
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < 0) {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    //In case every element is negative pick the maximum among them
    if (sum == 0 and ans == 0) {
        int y = INT_MIN;
        for (int i = 0; i < n; i++) {
            y = max(y, arr[i]);
        }
        return y;
    }
    return ans;
}
int circularSubarraySum(int arr[], int n) {
    int non_circular_sum = kadaneAlgo(arr, n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    int circular_sum = total_sum + kadaneAlgo(arr, n);
    //In case every element is negative then circular sum will always be negative
    if (circular_sum == 0) {
        return non_circular_sum;
    }
    return max(circular_sum, non_circular_sum);
}
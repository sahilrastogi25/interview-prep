long countTriplets(vector<long> arr, long r) {

    unordered_map<long, long>left;
    unordered_map<long, long>right;
    long count = 0;

    for (long x : arr) {
        right[x]++;
        left[x] = 0;
    }

    for (long x : arr) {
        right[x]--;
        if (x % r == 0) {
            count = count + (left[x / r] * right[x * r]);
        }
        left[x]++;
    }
    return count;

}
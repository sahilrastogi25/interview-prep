//Basic Approach-O(N^2)
int maxIndexDiff(int arr[], int n)
{
    int maxDist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] <= arr[j]) {
                maxDist = max(maxDist, j - i);
            }
        }
    }
    return maxDist;
}
//Better Approach-O(NlogN)
/*
sort the pair of arr[i] and i and this will help to reduce our stress regarding
arr[i]<=arr[j] then we can find the max difference between i and j from finding the
minimum value of i in the left subarray and subtracting it from the index j
i --> min value in the left subarray
j --> a particular index value
*/
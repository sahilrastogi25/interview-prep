/*
bitonic array-
an element exist such that array is increasing till that element and
then decreasing after that, this element will be the peak/max element in the array
*/
int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int ans;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]) {
            ans = mid;
            break;
        }
        else if (arr[mid + 1] > arr[mid]) {
            s = mid + 1;
        } else if (arr[mid - 1] > arr[mid]) {
            e = mid - 1;
        }
    }
    return ans;
}
class Solution {
public:
    int maximumSumSubarray(int k, vector<int> &arr , int n) {
        // code here
        int i = 0;
        int j = 0;
        int currSum = 0;
        int maxSum = 0;
        while (j < n) {
            currSum += arr[j];
            if (j - i + 1 == k) {
                maxSum = max(maxSum, currSum);
                currSum -= arr[i];
                i++;
            }
            j++;
        }
        return maxSum;
    }
};
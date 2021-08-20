/*
Time complexity= O(N)
If all the numbers present in the array are +ve or even number of -ve's
--> Answer=product of the whole array
ex- 1 -2 -3 5 4
max ans from both sides= 120
If odd number of -ve's then either the answer will come from left subarray
or right subarray
ex- 1 -5 -2 -3 8
max ans from left--> 1*-5*-2=10
max ans from right--> 8*-3*-2=48
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            product *= nums[i];
            mx = max(mx, product);
            if (nums[i] == 0) product = 1;
        }
        product = 1;
        for (int i = n - 1; i >= 0; i--) {
            product *= nums[i];
            mx = max(mx, product);
            if (nums[i] == 0) product = 1;
        }
        return mx;
    }
};
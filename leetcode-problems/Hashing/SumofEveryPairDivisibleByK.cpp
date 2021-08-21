/*
Time and Space Complexity- O(N)
if a%k=x and b%k=k-x --> a=nk+x,b=mk+k-x --> a+b=(n+m+1)k --> (a+b)%k=0
This means that if the frequency of elements with remainder x is equal to frequency
of elements with remainder k-x then we can pair all of them up and get our desired
result.
For remainder 0 we want that to be even as it can be paired only with those
elements whose remainder is 0.
*/
bool canPair(vector<int> nums, int k) {
    unordered_map<int, int>ump;
    for (int x : nums) {
        int rem = x % k;
        ump[rem]++;
    }
    if (ump[0] % 2 != 0) {
        return false;
    }
    for (int i = 1; i <= k / 2; i++) {
        if (ump[i] != ump[k - i]) {
            return false;
        }
    }
    return true;
}
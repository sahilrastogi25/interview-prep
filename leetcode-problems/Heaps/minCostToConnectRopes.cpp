class Solution
{
public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>>minh;
        long long ans = 0;
        long long curr = 0;
        for (long long i = 0; i < n; i++) {
            minh.push(arr[i]);
        }
        while (minh.size() >= 2) {
            long long a1 = minh.top();
            minh.pop();
            //corner case
            long long a2 = minh.top();
            minh.pop();
            long long sum = a1 + a2;
            ans += sum;
            curr = sum;
            minh.push(curr);
        }
        return ans;
    }
};
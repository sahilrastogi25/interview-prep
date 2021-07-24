class Solution
{
public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>>minh;
        vector<int>result;
        for (int i = 0; i < n; i++) {
            minh.push(arr[i]);
            if (minh.size() > k) {
                minh.pop();
            }
        }
        while (!minh.empty()) {
            result.push_back(minh.top());
            minh.pop();
        }
        sort(result.begin(), result.end(), greater<int>());
        return result;
    }

};
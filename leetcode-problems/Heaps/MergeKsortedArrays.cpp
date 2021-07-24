class Solution
{
public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>minh;
        vector<int>output;
        for (int i = 0; i < k; i++) {
            int el = arr[i][0];
            minh.push({el, i, 0});
        }
        while (!minh.empty()) {
            auto top = minh.top();
            minh.pop();
            int el = top[0];
            int arr_idx = top[1];
            int el_idx = top[2];
            output.push_back(el);
            if (el_idx + 1 < k) {
                int next_el = arr[arr_idx][el_idx + 1];
                minh.push({next_el, arr_idx, el_idx + 1});
            }
        }
        return output;
    }
};
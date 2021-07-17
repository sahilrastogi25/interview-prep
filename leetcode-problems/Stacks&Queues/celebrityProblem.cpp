class Solution
{
public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n)
    {
        // code here
        stack<int>s;
        int cols = M[0].size();
        int rows = M.size();
        for (int i = 0; i < n; i++) {
            s.push(i);
        }
        while (!s.empty()) {
            if (s.size() == 1) {
                break;
            }
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            if (M[x][y] == 1) {
                s.push(y);
            } else if (M[x][y] == 0) {
                s.push(x);
            }
        }
        int ans = s.top();
        s.pop();
        for (int i = 0; i < rows; i++) {
            if (i != ans and M[i][ans] != 1) {
                return -1;
            }
        }
        for (int j = 0; j < cols; j++) {
            if (M[ans][j] != 0) {
                return -1;
            }
        }
        return ans;
    }
};
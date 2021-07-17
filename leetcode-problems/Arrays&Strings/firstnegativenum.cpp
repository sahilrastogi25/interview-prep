vector<long long> printFirstNegativeInteger(long long int a[],
        long long int n, long long int k) {
    long long int i = 0, j = 0;
    list<long long>l;
    long long int currNum;
    vector<long long>result;
    while (j < n) {
        currNum = a[j];
        if (currNum < 0) {
            l.push_back(currNum);
        }
        if (j - i + 1 == k) {
            if (l.size() == 0) {
                result.push_back(0);
            }
            else {
                long long int el = l.front();
                if (a[i] == el) {
                    l.pop_front();
                }
                result.push_back(el);
            }
            i++;
        }
        j++;
    }
    return result;
}
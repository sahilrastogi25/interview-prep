#define ll long long
vector<ll> printFirstNegativeInteger(ll int a[], ll int n, ll int k) {
    ll int i = 0, j = 0;
    list<ll>l;
    ll int currNum;
    vector<ll>result;
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
                ll int el = l.front();
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
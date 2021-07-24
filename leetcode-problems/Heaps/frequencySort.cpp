#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define gpii greater<pair<int,int>>
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int>mp;
        vector<int>result;
        for (int x : nums) {
            mp[x]++;
        }
        priority_queue<pii, vpii, gpii>minh;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            minh.push({it->second, it->first});
        }
        while (!minh.empty()) {
            int cnt = minh.top().first;
            while (cnt > 0) {
                result.push_back(minh.top().second);
                cnt--;
            }
            minh.pop();
        }
        return result;
    }
};
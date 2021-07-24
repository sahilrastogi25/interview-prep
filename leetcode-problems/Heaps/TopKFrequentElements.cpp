#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define gpii greater<pair<int,int>>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pii, vpii, gpii>minh;
        unordered_map<int, int>mp;
        vector<int>result;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto i = mp.begin(); i != mp.end(); i++) {
            minh.push({i->second, i->first});
            if (minh.size() > k) {
                minh.pop();
            }
        }
        while (!minh.empty()) {
            result.push_back(minh.top().second);
            minh.pop();
        }
        return result;
    }
};
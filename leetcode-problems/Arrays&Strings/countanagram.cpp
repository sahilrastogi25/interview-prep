class Solution {
public:
  int search(string pat, string txt) {
    unordered_map <char, int> m;
    for (auto ch : pat) {
      m[ch]++;
    }
    int k = pat.size();
    int n = txt.size();
    int count = m.size();
    int ans = 0;
    int i = 0, j = 0;

    while (j < n) {
      if (m.find(txt[j]) != m.end()) {
        m[txt[j]]--;
        if (m[txt[j]] == 0)
          count--;
      }
      if (j - i + 1 == k) {
        if (count == 0)
          ans++;

        if (m.find(txt[i]) != m.end()) {
          m[txt[i]]++;

          if (m[txt[i]] == 1)
            count++;
        }
        i++;
      }
      j++;
    }
    return ans;
  }
};
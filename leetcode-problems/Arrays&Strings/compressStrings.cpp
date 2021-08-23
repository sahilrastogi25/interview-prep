string encode(string str)
{
  int n = str.size();
  string result;
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    while (i < n - 1 and str[i] == str[i + 1]) {
      cnt++;
      i++;
    }
    result += str[i];
    result += to_string(cnt);
  }
  //This can happen for a string like abcd --> a1b1c1d1>abcd
  if (result.size() > str.size()) {
    return str;
  }
  return result;
}
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> letter_Count;
  for (int i = 0; i < n; i++)
  {
    letter_Count[s[i]]++;
  }
 
  int cnt = 0;
  for (auto it : letter_Count)
  {
    int minute = it.first - 64;
    if (it.second >= minute)
      cnt++;
  }
  cout << cnt << endl;
}
 
int main()
{
  optimize();
  file();
 
  int t;
 cin >> t;
 
  while (t--)
  {
    solve();
  }
  return 0;
}

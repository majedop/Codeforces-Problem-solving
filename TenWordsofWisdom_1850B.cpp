void solve()
{
  int n;
  cin >> n;

  map<int, int> mp;
  for (int i = 1; i <= n; i++)
  {
    int a, b;
    cin >> a >> b;
    if (a <= 10)
      mp[i] = b;
  }

  int max = -1, idx = -1;
  for (auto it : mp)
  {
    if (it.second > max)
    {
      max = it.second;
      idx = it.first;
    }
  }
  cout << idx << "\n";
}

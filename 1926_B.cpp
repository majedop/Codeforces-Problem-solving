void solve()
{
  int n, same = -1;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (s[j] == '1')
      {
        cnt++;
      }
    }
    if (cnt != 0)
    {
      mp[i] = cnt;
    }
  }

  for(auto it : mp)
  {
    if(same == -1)
    same = it.second;
    if (it.second != same)
    {
      cout << "TRIANGLE" << endl;
      return;
    }
  }
  cout << "SQUARE" << endl;
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

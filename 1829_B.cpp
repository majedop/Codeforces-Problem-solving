void solve()
{
  int n;
  cin >> n;
  int cnt = 0, mx = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (v[i] == 0)
      cnt++;
    else
    {
      cnt = 0;
    }
    mx = max(cnt, mx);
  }
  cout << mx << endl;
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

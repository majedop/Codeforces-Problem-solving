void solve()
{
  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  if (n == 1)
    cout << 0 << endl;
  else
  {
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int cnt = 1, mx = 1;
    for (int i = 1; i < n; i++)
    {
      if ((v[i - 1] - v[i]) <= k)
        cnt++;
      else
      {
        cnt = 1;
      }
      mx = max(mx, cnt);
    }
    cout << abs(n - mx) << endl;
  }
}

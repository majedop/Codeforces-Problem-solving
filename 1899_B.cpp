void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> devs;
  for(int i = 1; i<=n; i++)
  {
    if(n%i == 0) devs.push_back(i);
  }

  ll ans = 0;
  for(auto segSize : devs)
  {
    ll mx = LLONG_MIN, mn = LLONG_MAX;
    int cnt = 0;
    ll sum = 0;
    for(int i = 0; i<n; i++)
    {
      sum += v[i];
      cnt++;
      if(cnt == segSize)
      {
        mn = min(mn,sum);
        mx = max(mx, sum);
        cnt = 0;
        sum = 0;
      }
    }
    ans = max(ans,(mx-mn));
  }
  cout << ans << endl;
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

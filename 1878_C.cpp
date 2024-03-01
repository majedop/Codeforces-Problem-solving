void solve()
{
  long long n, k, x;
  cin >> n >> k >> x;

  ll mn = (k * (k + 1)) / 2;
  ll mx = (n * (n + 1)) / 2;
  ll def = n - k;
  ll subt = mx - (def * (def + 1)) / 2;
  if (x < mn || x > subt)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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

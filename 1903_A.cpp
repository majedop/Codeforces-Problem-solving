void solve()
{
  int n, k;
  cin >> n >> k;
  vi v(n);
  int i;
  forn(i, n)
  cin >> v[i];

  if (k >= 2)
    cout << "YES" << endl;
  else
  {
    forn(i, n - 1)
    {
      if (v[i] > v[i + 1])
      {
        cout << "NO" << endl;
        return;
      }
    }
    cout << "YES" << endl;
  }
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

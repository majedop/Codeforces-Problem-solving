void solve()
{
  ll n, sum = 0;
  cin >> n;
  while (n > 0)
  {
    sum += n;
    n = n / 2;
  }
  cout << sum << endl;
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

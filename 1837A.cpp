void solve()
{
  int x,k;
  cin >> x >> k;
  if(x%k != 0)
  {
    cout << 1 << endl;
    cout << x << endl;
  }
  else
  {
    cout << 2 << endl;
    cout << x-1 << " " << 1 << endl;
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

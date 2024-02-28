void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum += v[i];
  }

  if (sum % 3 == 0)
  {
    cout << 0 << endl;
    return;
  }

  for (int i = 0; i < n; i++)
  {
    if ((sum - v[i]) % 3 == 0)
    {
      cout << 1 << endl;
      return;
    }
  }
  if ((sum + 1) % 3 == 0)
  {
    cout << 1 << endl;
    return;
  }
  else
  cout << 2 << endl;

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

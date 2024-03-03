
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        if (s[i] == s[j])
        {
          v[j] = 1;
        }
      }
    }
    else
    {
      for (int j = 0; j < n; j++)
      {
        if (s[i] == s[j])
          v[j] = 0;
      }
    }
  }

  for (int i = 1; i < n; i++)
  {
    if (v[i - 1] == v[i])
    {
      cout << "NO" << endl;
      return;
    }
  }
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

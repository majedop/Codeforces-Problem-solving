
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0, cnt = 0;
  forn(i, n)
  {
    if (s[i] == '.')
    {
      cnt++;
      ans++;
    }
    else
    {
      if (cnt == 3)
      {
        ans = 2;
        break;
      }
      cnt = 0;
    }
    if (cnt == 3)
    {
      ans = 2;
      break;
    }
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

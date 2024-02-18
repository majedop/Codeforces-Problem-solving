void solve()
{
  string ans = "";
  for (int i = 1; i <= 8; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < 8; j++)
    {
      if (s[j] != '.')
        ans += s[j];
    }
  }
  cout << ans << endl;
}

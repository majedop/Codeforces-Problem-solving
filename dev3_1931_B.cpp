
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0;
  if (s.size() == 1)
  {
    if (s[0] == 'B')
      ans = 1;
  }
  else if (s.size() == 2)
  {
    if ((s[0] == 'B' && s[1] == 'W') || (s[0] == 'W' && s[1] == 'B'))
      ans = 1;
    else
      ans = 2;
  }
  else
  {
    int l = 0, r = n - 1;

    while (l < r)
    {
      if (s[l] == 'B' && s[r] == 'B')
      {
        ans = (r - l) + 1;
        break;
      }
      if (s[l] != 'B')
        l++;
      if (s[r] != 'B')
        r--;
    }
  }
  cout << ans << endl;
}

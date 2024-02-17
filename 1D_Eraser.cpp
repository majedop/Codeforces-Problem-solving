void solve()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int l = 0, r = n - 1, cnt = 0;

  while (l <= r)
  {
    if (s[l] == 'B')
    {
      l += k;
      cnt++;
    }
    else if (s[l] != 'B')
    {
      l++;
    }
    else if (s[r] != 'B')
    {
      r--;
    }
  }
  cout << cnt << endl;
}

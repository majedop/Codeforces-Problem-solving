int n;
  cin >> n;
  string s;
  cin >> s;

  int l = 0, r = n - 1;
  int ans = 0;
  if (n == 1)
    ans = 1;
  while (l < r)
  {
    if (s[l] != 'B')
      l++;
    if (s[r] != 'B')
      r--;

    if (s[l] == 'B' && s[r] == 'B')
    {
      ans = (r - l) + 1;
      break;
    }
  }
  cout << ans << endl;

void solve()
{
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x3 >> y3 >> x4 >> y4;

  int ans = 1;
  if(x1 == x3)
  ans *= abs(y1-y3);
  else
  ans *= abs(x1-x3);
  if(x2 == x4)
  ans *= abs(y2-y4);
  else
  ans *= abs(x2-x4);

  cout << ans << endl;

  /* cout << x1 << y1 << '\n' << x2 << y2 << endl;
  cout << x3 << y3 << '\n' << x4 << y4 << endl; */
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

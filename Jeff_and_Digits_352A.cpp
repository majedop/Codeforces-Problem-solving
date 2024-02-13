void solve()
{
  int n;
  cin >> n;
  int zro = 0;
  int fiv = 0;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    if (in == 5)
      fiv++;
    if (in == 0)
      zro++;
  }
  if (zro == 0)
    cout << -1;
  else if (fiv < 9)
    cout << 0;
  else
  {
    while (true)
    {
      if (fiv % 9 == 0)
        break;
      else
        fiv--;
    }
    for (int i = 0; i < fiv; i++)
      cout << 5;

    for (int i = 0; i < zro; i++)
      cout << 0;
  }
}

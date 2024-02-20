void solve()
{
  string s;
  cin >> s;
  int A_ = 0, B_ = 0;
  for (int i = 0; i < 5; i++)
  {
    if (s[i] == 'A')
      A_++;
    else
      B_++;
  }
  if (A_ > B_)
    cout << 'A' << endl;
  else
    cout << 'B' << endl;
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

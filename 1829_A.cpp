void solve()
{
  string s;
  string CF = "codeforces";
  cin >> s;
  int cnt = 0;
  for(int i = 0; i<s.size(); i++)
  {
    if(CF[i] != s[i])
    cnt++;
  }
  cout << cnt << endl;
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

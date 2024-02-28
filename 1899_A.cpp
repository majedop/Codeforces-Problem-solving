void solve()
{
  int n;
  cin >> n;
  if(n%3!=0)
  cout << "First" << endl;
  else
  cout << "Second" << endl;
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

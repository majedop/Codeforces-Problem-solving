
void solve()
{
  int n;
  cin >> n;
  vi v1(n), v2(n);
  int i = 0;
  forn(i,n)
    cin >> v1[i];

  map<int, int> mp;
  forn(i,n)
  {
    int b;
    cin >> b;
    mp[v1[i]] = b;
  }
  for(auto it : mp)
  cout << it.first << " ";

  cout << endl;
  for(auto it : mp)
  cout << it.second << " ";
  cout << endl;
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

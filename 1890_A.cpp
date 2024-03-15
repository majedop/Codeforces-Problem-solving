void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  map<int, int> mp;
  for (int i = 0; i < n; i++)
    mp[v[i]]++;

  if (mp.size() == 1)
    cout << "YES" << endl;
  else if (mp.size() > 2)
    cout << "NO" << endl;
  else
  {
    int prv = 0, next = 0, cnt = 0;
    for (auto it : mp)
    {
      if (cnt == 0)
      {
        prv = it.second;
        cnt = 1;
      }
      else
      {
        next = it.second;
        break;
      }
    }
    
    if ((prv == next) || (prv - 1 == next) || (prv == next - 1))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  /*  for(auto it: mp)
   cout << it.first << " > " << it.second << " > " << endl; */
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

void solve()
{
  int n;
  cin >> n;
  string s = "abcdefghijklmnopqrstuvwxyz";

  map<char, int> mp;
  for (int i = 0; i < s.size(); i++)
    mp[s[i]] = 0;

  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    for (auto it : mp)
    {
      if (in == it.second)
      {
        cout << it.first;
        mp[it.first]++;
        break;
      }
    }
  }
  cout << "\n";
}

int main()
{
  optimize();
  file();

  int t ;
   cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}

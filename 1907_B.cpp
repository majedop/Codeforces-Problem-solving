void solve()
{
  string s;
  cin >> s;
  vector<int> u, l;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'B')
    {
      if (!u.empty())
        u.pop_back();
    }
    else if (s[i] == 'b')
    {
      if (!l.empty())
        l.pop_back();
    }
    else if (s[i] >= 'a' && s[i] <= 'z')
      l.push_back(i); // push index
    else if (s[i] >= 'A' && s[i] <= 'Z')
      u.push_back(i); // push index
  }

  vector<int> all;
  for (int i = 0; i < u.size(); i++)
    all.push_back(u[i]);
  for (int i = 0; i < l.size(); i++)
    all.push_back(l[i]);

  sort(all.begin(), all.end()); // sorting index

  for (int i = 0; i < all.size(); i++)
    cout << s[all[i]];
  cout << "\n";
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

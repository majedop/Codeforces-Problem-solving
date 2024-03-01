
void solve()
{
  int n;
  cin >> n;
  vector<int> v;
  for(int i = n; ; i++)
  {
    if(i%2 != 0)
    v.push_back(i);
    if(v.size() == n)
    break;
  }
  for(int i = 0; i <v.size(); i++)
  cout << v[i] << " ";

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

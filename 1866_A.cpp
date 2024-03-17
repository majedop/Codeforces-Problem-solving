
void solve()
{
  int n;
  cin >> n;
  int mul = 1;
  vector<int> v(n);
  int min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if (v[i] >= 0 && v[i] < min)
      min = v[i];
    else if (v[i] < 0 && (v[i]*-1) < min)
      min = (v[i]*-1);
  }
  cout << min << endl;
}
int main()
{
  optimize();
  file();

  int t=1;
  //cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}

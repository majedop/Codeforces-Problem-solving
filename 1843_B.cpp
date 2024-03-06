
void solve()
{
  int n;
  cin >> n;
  ll mx = 0, mn = 0,flag = 0;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    mx += abs(in);
    if(in < 0 && flag == 0)
    {
      flag = 1;
      mn++;
    }
    if(in > 0)
    {
      flag = 0;
    }
  }
  cout << mx << " " << mn << endl;
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

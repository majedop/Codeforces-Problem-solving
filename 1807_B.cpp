void solve()
{
  int n;
  cin >> n;
  int even = 0, odd = 0;
  
  for(int i = 1; i<=n; i++)
  {
    int in;
    cin >> in;
    if(in%2==0)
    even +=in;
    else
    odd +=in;
  }

  if(even > odd)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
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

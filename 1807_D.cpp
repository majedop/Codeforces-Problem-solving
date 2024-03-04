long long v[200000],pref_sum[2000000];
void solve()
{
  int n, q;
  cin >> n >> q;
  for (int i = 1; i <=n; i++)
    cin >> v[i];

  pref_sum[1] = v[1];
  for (int i = 2; i <=n; i++)
    pref_sum[i] = pref_sum[i - 1] + v[i];

 /*  for(int i = 0; i<n; i++)
  cout << pref_sum[i] << " "; */

  ll total_sum = pref_sum[n];

  while (q--)
  {
    ll l ,r , k;
    cin >> l >> r >> k;
    ll LtoR_sum = (r-l+1)*k;
    ll sum = (total_sum - pref_sum[r]) + pref_sum[l-1];
    ll ans = sum+LtoR_sum;
    if(ans%2 != 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }
  
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

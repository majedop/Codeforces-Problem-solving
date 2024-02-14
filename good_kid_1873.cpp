void solve()
{
  int n;
  cin >> n;
  int ar[n];
  int mn = 2147483647;
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
    if(ar[i] < mn)
    mn = ar[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (mn == ar[i])
    {
      ar[i]++;
      break;
    }
  }

  int mul = 1;
  for (int i = 0; i < n; i++)
    mul *= ar[i];

  cout << mul << endl;
}

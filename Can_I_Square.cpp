bool is_perfect(long long sum)
{
  long long root = sqrt(sum);
  return (root*root == sum);
}
void solve()
{
  long long n;
  cin >> n;
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    int in;
    cin >> in;
    sum += in;
  }
   if (is_perfect(sum))
    cout << "YES" << endl;
  else
    cout << "NO" << endl; 
}

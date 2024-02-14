void solve()
{
  char a, b, c;
  cin >> a >> b >> c;
  if (a == 'a' && b == 'b' && c == 'c')
  {
    cout << "Yes" << endl;
    return;
  }
  swap(a, b);
  if (a == 'a' && b == 'b' && c == 'c')
  {
    cout << "Yes" << endl;
    return;
  }
  swap(a, b);

  swap(b, c);
  if (a == 'a' && b == 'b' && c == 'c')
  {
    cout << "Yes" << endl;
    return;
  }
  swap(b, c);
  
  swap(a, c);
  if (a == 'a' && b == 'b' && c == 'c')
  {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

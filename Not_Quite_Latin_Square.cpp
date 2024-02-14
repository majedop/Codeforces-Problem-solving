void solve()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int arr[4];
      arr[1] = 0, arr[2] = 0, arr[3] = 0;
      char a, b, c;
      cin >> a >> b >> c;
      if (a != '?')
        arr[(a - 'A') + 1] = 1;
      if (b != '?')
        arr[(b - 'A') + 1] = 1;
      if (c != '?')
        arr[(c - 'A') + 1] = 1;

      // cout << arr[1] << arr[2] << arr[3] << endl;
      if (arr[1] != 1)
        cout << 'A';
      else if (arr[2] != 1)
        cout << 'B';
      else if (arr[3] != 1)
        cout << 'C';
    }
    cout << "\n";
  }
}

void solve()
{
  string str = "abcdefgh";
  string s;
  cin >> s;
  char ch = s[0];
  int in = s[1]-'0';

  for(int i = 0; i<8; i++)
  {
    if(str[i] != ch)
    cout << str[i] << in << endl;
  }
  
  for(int i = 1; i<=8; i++)
  {
    if(i != in)
    cout << ch << i << endl;
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

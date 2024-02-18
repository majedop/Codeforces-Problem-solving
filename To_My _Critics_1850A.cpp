bool find(char ch)
{
  if (ch == 'a' || ch == 'e')
  {
    return true;
  }
  return false;
}
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (s.size() <= 3) // when input size <= 3, no boundy
  {
    cout << s;
  }
  else
  {
    int l = 0, r = n - 1;
    while (l < r)
    {
      if (find(s[l]) == false && find(s[l + 1]) == true && find(s[l + 2]) == false && find(s[l + 3]) == true)
      {
        cout << s[l] << s[l + 1] << ".";
        l += 2;
      }
      else if (find(s[l]) == false && find(s[l + 1]) == true && find(s[l + 2]) == false && find(s[l + 3]) == false)
      {
        cout << s[l] << s[l + 1] << s[l + 2] << ".";
        l += 3;
      }
      if ((n - l) == 3)
      {
        cout << s[l] << s[l + 1] << s[l + 2];
        break;
      }
      else if ((n - l) == 2)
      {
        cout << s[l] << s[l + 1];
        break;
      }
    }
  }
  cout << "\n";
}

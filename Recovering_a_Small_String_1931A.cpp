void solve()
{
  int n;
  cin >> n;
  int x = 26, y = 26, z = 26;
  for (int i = 1; i <= 78; i++)
  {
    if (x + y + z == n)
    {
      char xx, yy, zz;
      xx = x + 96, yy = y + 96, zz = z + 96;
      cout << xx << yy << zz << endl;
      break;
    }
    else
    {
      if (x != 1)
        x--;
      else if (y != 1)
        y--;
      else if (z != 1)
        z--;
    }
  }
}

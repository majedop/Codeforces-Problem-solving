#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int min = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] <= min)
      min = v[i];
  }

  int cnt = 0, city;
  for (int i = 0; i < n; i++)
  {
    if (v[i] == min)
    {
      cnt++;
      city = i + 1;
    }
    if (cnt >= 2)
    {
      cout << "Still Rozdil" << endl;
      return 0;
    }
  }
  cout << city << endl;

  return 0;
}

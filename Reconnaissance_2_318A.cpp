#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> ar(n+1);
  for (int i = 1; i <= n; i++)
  {
    cin >> ar[i];
  }
  int min = abs(ar[1] - ar[n]);
  pair<int, int> p;
  p.first = 1;
  p.second = n;

  for (int i = 1; i < n; i++)
  {
    if (abs(ar[i] - ar[i + 1]) <= min)
    {
      min = abs(ar[i] - ar[i + 1]);
      p = {i, i + 1};
    }
  }
  cout << p.first << " " << p.second;
}

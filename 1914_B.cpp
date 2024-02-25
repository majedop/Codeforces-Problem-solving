#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    int idx = 0;
    for (int i = n; i >= 1; i--)
    {
      v[idx] = i;
      idx++;
    }

    reverse(v.begin(), v.begin() + k + 1);
    for (int i = 0; i < n; i++)
      cout << v[i] << " ";
  }
  return 0;
}

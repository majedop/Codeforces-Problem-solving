#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int a1 = sqrt((a * b) / c);
  int b1 = sqrt((b * c) / a);
  int c1 = sqrt((a * c) / b);
  cout << 4 * (a1 + b1 + c1);
  return 0;
}

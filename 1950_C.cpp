// Bismillahir Rahmanir Rahim
// solution: Shafi Munshi
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ll long long int
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sp ' '
#define yess cout << "YES" << endl
#define noo cout << "NO" << endl
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);
#define fraction()              \
  cout.unsetf(ios::floatfield); \
  cout.precision(10);           \
  cout.setf(ios::fixed, ios::floatfield);

#define dbg(args...)        \
  do                        \
  {                         \
    cerr << #args << " : "; \
    faltu(args);            \
  } while (0)
void faltu()
{
  cerr << endl;
}
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
  cerr << arg << ' ';
  faltu(rest...);
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
inline void file();

const int mod = (int)1000000007;

int jj = 1e5;
// char ch[jj]=false;

void solve()
{
  string s;
  cin >> s;
  int h = stoi(s.substr(0, 2));
  string m = s.substr(3, 4);

  if (h == 0)
    cout << "12:" << m << " AM" << endl;
  else if (h < 10)
    cout << '0' << h << ':' << m << " AM" << endl;
  else if (h < 12)
    cout << h << ':' << m << " AM" << endl;
  else if (h == 12)
    cout << h << ':' << m << " PM" << endl;
  else
  {
    int x = h - 12;
    if (x < 10)
      cout << '0' << x << ':' << m << " PM" << endl;
    else if (x < 12)
      cout << x << ':' << m << " PM" << endl;
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

void file()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
};

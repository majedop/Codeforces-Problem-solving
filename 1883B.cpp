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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  
  vector<int> ar(27);
  forn(i, n) ar[s[i] - 96]++;
  int od = 0;
  forn(i, 27)
  {
    if (ar[i] % 2 == 1 && ar[i] != 0)
      od++;
  }

  if (od > 1 && od > k + 1)
    noo;
  else
    yess;
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

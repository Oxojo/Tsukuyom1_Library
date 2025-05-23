#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;
using int128 = __int128;
using State = string::const_iterator;
class ParseError {};
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define reps(i, l, r) for(ll i = (l); i < (r); i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define endl "\n";
const ll INF = LLONG_MAX / 4;
const ld inf = numeric_limits<long double>::max() / (ld)4;
const ll mod1 = 1000000007;
const ll mod2 = 998244353;
const ld pi = 3.1415926535897;
ll dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
ll dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
__int128 str2i128(string str) {
  __int128 ret = 0;
  bool minus = false;
  for (auto c : str) {
    if (c == '-') {
      minus = true;
    }
    else {
      ret = ret * 10 + c - '0';
    }
  }
  return minus ? -ret : ret;
}
istream &operator>>(istream &is, __int128 &x) {
  string s;
  return is >> s, x = str2i128(s), is;
}
ostream &operator<<(ostream &os, const __int128 &x) {
  __int128 tmp = x;
  if (tmp == 0) return os << 0;
  vector<int>ds;
  if (tmp < 0) {
    os << '-';
    while (tmp) {
      int d = tmp % 10;
      if (d > 0) d -= 10;
      ds.emplace_back(-d), tmp = (tmp - d);
    }
  }
  else {
    while (tmp) {
      ds.emplace_back(tmp % 10);
      tmp /= 10;
    }
  }
  reverse(all(ds));
  for (auto i : ds) os << i;
  return os;
}
template <typename T>
bool chmax(T &a, const T& b) {
  if (a < b) { a = b; return true; }
  return false;
}
template <typename T>
bool chmin(T &a, const T& b) {
  if (a > b) { a = b; return true; }
  return false;
}

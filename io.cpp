template <class T>
bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
template <class T>
bool chmin(T &a, const T &b) { return a > b ? a = b, true : false; }
template <class T, size_t S>
ostream &operator<<(ostream &_ostr, const array<T, S> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const vector<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const valarray<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const deque<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, stack<T> _v);
template <class T>
ostream &operator<<(ostream &_ostr, queue<T> _v);
template <class T>
ostream &operator<<(ostream &_ostr, const list<T> &_v);
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const pair<T, Y> &_v);
template <class... Ts>
ostream &operator<<(ostream &_ostr, const tuple<Ts...> &t);
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const map<T, Y> &_v);
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const multimap<T, Y> &_v);
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const unordered_map<T, Y> &_v);
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const unordered_multimap<T, Y> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const set<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const multiset<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const unordered_set<T> &_v);
template <class T>
ostream &operator<<(ostream &_ostr, const unordered_multiset<T> &_v);
template <class T>
ostream &_orange(ostream &_ostr, const T &_v) {
  if (_v.size() == 0)
    return _ostr;
  _ostr << *begin(_v);
  for (auto itr = next(begin(_v)), enditr = end(_v); itr != enditr; itr++)
    _ostr << " " << *itr;
  return _ostr;
}
template <class T, size_t S>
ostream &operator<<(ostream &_ostr, const array<T, S> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const vector<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const valarray<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const deque<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, stack<T> _v) {
  vector<T> v;
  while (!_v.empty()) {
    v.push_back(_v.top());
    _v.pop();
  }
  reverse(v.begin(), v.end());
  return _ostr << v;
}
template <class T>
ostream &operator<<(ostream &_ostr, queue<T> _v) {
  if (_v.size() == 0)
    return _ostr;
  _ostr << _v.front();
  _v.pop();
  while (!_v.empty()) {
    _ostr << " " << _v.front();
    _v.pop();
  }
  return _ostr;
}
template <class T>
ostream &operator<<(ostream &_ostr, const list<T> &_v) { return _orange(_ostr, _v); }
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const pair<T, Y> &_v) { return _ostr << _v.first << ":" << _v.second; }
template <class... Ts>
ostream &operator<<(ostream &_ostr, const tuple<Ts...> &_v) {
  bool first = true;
  apply([&_ostr, &first](auto &&...args) {
    auto print = [&](auto &&val) {
      if (!first)
        _ostr << " ";
      (_ostr << val);
      first = false;
    };
    (print(args), ...);
  },
        _v);
  return _ostr;
}
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const map<T, Y> &_v) { return _orange(_ostr, _v); }
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const multimap<T, Y> &_v) { return _orange(_ostr, _v); }
template <class T, class Y>
ostream &operator<<(ostream &_ostr, const unordered_map<T, Y> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const set<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const multiset<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const unordered_set<T> &_v) { return _orange(_ostr, _v); }
template <class T>
ostream &operator<<(ostream &_ostr, const unordered_multiset<T> &_v) { return _orange(_ostr, _v); }
template <class T, size_t S>
istream &operator>>(istream &_istr, array<T, S> &_v);
template <class T>
istream &operator>>(istream &_istr, vector<T> &_v);
template <class T>
istream &operator>>(istream &_istr, valarray<T> &_v);
template <class T>
istream &operator>>(istream &_istr, deque<T> &_v);
template <class T, class Y>
istream &operator>>(istream &_istr, pair<T, Y> &_v);
template <class T>
istream &_irange(istream &_istr, T &_v) {
  for (auto &i : _v)
    _istr >> i;
  return _istr;
}
template <class T, size_t S>
istream &operator>>(istream &_istr, array<T, S> &_v) { return _irange(_istr, _v); }
template <class T>
istream &operator>>(istream &_istr, vector<T> &_v) { return _irange(_istr, _v); }
template <class T>
istream &operator>>(istream &_istr, valarray<T> &_v) { return _irange(_istr, _v); }
template <class T>
istream &operator>>(istream &_istr, deque<T> &_v) { return _irange(_istr, _v); }
template <class T, class Y>
istream &operator>>(istream &_istr, pair<T, Y> &_v) { return _istr >> _v.first >> _v.second; }
struct init {
  init() {
    cin.tie(0)->sync_with_stdio(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(16);
  }
} init;

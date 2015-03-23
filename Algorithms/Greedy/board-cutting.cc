#include <iostream>
#include <iterator>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
#include <cstdlib>
#include <cmath>
#include <limits>

using namespace std;

#define REP(n) for (int i = 0; i < (int) n; i++)
#define REPE(i, a, n) for (int i = a; i < (int) n; i++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
main(int argc, char *argv[]) {
  long long t, m, n;
  cin >> t;
  REP(t) {
    cin >> m >> n;
    long long x[n - 1], y[m - 1];
    REPE(i, 0, m - 1) {
      cin >> y[i];
    }
    REPE(i, 0, n - 1) {
      cin >> x[i];
    }
    sort(y, y + m - 1, greater< long long >());
    sort(x, x + n - 1, greater< long long >());
    long long total = 0;
    long long h = 1, v = 1;
    while (h < m || v < n) {
      if (h < m && (y[h - 1] > x[v - 1])) {
        total += y[h - 1] * v;
        h++;
      }
      else if (v < n && (y[h - 1] <= x[v - 1])) {
        total += x[v - 1] * h;
        v++;
      }
      else {
        if (h == m) {
          total += x[v - 1] * h;
          v++;
        }
        else {
          total += y[h - 1] * v;
          h++;
        }
      }
      total %= MOD;
    }
    cout << total << endl;
  }
  return 0;
}
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

using namespace std;

#define REP(i, a, n) for (int i = a; i < (int) n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
gcd(int x, int y) {
  while (y != 0) {
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}

bool
isRelativePrime(int n) {
  vector< int > numbers;
  REP(i, 0, n) {
    int x;
    cin >> x;
    numbers.push_back(x);
  }
  REP(i, 0, n - 1) {
    REP(j, i + 1, n) {
      if (gcd(numbers[i], numbers[j]) < 2)
        return true;
    }
  }
  return false;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    bool flag;
    cin >> n;
    flag = isRelativePrime(n);
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
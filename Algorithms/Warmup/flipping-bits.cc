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

unsigned int
flippingBit(unsigned int n) {
  return n ^ 0xFFFFFFFF;
}

int
main(int argc, char *argv[]) {
  int t;
  unsigned int n;
  cin >> t;
  REP(i, 0, t) {
    cin >> n;
    cout << flippingBit(n) << endl;
  }
  return 0;
}
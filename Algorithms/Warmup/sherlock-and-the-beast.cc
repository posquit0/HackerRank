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

void
printTheBeast(int n) {
  int rest = 0;
  while (!(n < 0) && n % 3 != 0) {
    n -= 5;
    rest++;
  }
  if (n < 0) cout << "-1" << endl;
  else cout << string(n, '5') << string(rest * 5, '3') << endl;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    printTheBeast(n);
  }  
  return 0;
}
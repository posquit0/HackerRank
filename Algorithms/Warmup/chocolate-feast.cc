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
calc(int n, int c, int m) {
  int chocolate_num = n / c;
  int wrapper_num = chocolate_num;
  while (wrapper_num >= m) {
    chocolate_num += wrapper_num / m;
    wrapper_num = (wrapper_num / m) + (wrapper_num % m);
  }
  return chocolate_num;
}

int
main(int argc, char *argv[]) {
  int t, n, c, m;
  cin >> t;
  while (t--) {
    cin >> n >> c >> m;
    cout << calc(n, c, m) << endl;
  }  
  return 0;
}
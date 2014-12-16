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

long long
calc(long long n) {
  return (n / 2) * (n / 2 + n % 2);
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  REP(i, 0, t) {
    long long n;
    cin >> n;
    cout << calc(n) << endl;
  }  
  return 0;
}
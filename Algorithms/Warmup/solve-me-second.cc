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
solveMeSecond(int n1, int n2) {
  return n1 + n2;
}

int
main(int argc, char *argv[]) {
  int num1, num2;
  int sum;
  int t;
  cin >> t;
  REP(i, 0, t) {
    cin >> num1 >> num2;
    sum = solveMeSecond(num1, num2);
    cout << sum << endl;
  }
  return 0;
}
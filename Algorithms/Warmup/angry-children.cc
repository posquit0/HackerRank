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
calcUnfairness(int n, int k) {
  int unfairness = 1e9;
  int candies[n];
  REP(i, 0, n) {
    cin >> candies[i];
  }
  sort(candies, candies + n);
  REP(i, 0, n - k + 1) {
    unfairness = min(unfairness, candies[i + k - 1] - candies[i]);
  }
  return unfairness;
}

int
main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;
  cout << calcUnfairness(n, k) << endl;  
  return 0;
}
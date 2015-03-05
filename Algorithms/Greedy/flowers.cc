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
  int n, k;
  cin >> n >> k;
  vector< int > costs;
  REPE(i, 0, n) {
    int val;
    cin >> val;
    costs.push_back(val);
  }
  sort(ALL(costs));
  int total = 0;
  int cnt = k;
  while (!costs.empty()) {
    total += costs.back() * (cnt++ / k);
    costs.pop_back();
  }
  cout << total << endl;
  return 0;
}
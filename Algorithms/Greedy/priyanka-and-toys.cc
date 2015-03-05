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
  int n;
  cin >> n;
  vector< int > weights;
  REP(n) {
    int val;
    cin >> val;
    weights.push_back(val);
  }
  sort(ALL(weights));
  int cur_weight = -1;
  int cnt;
  for(int val: weights) {
    if (cur_weight == -1 || (cur_weight + 4 < val)) {
      cur_weight = val;
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
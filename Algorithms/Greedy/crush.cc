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
long long data_set[10000005] = { 0 }; 

int
main(int argc, char *argv[]) {
  long long n, m;
  cin >> n >> m;
  REP(m) {
    long long a, b, k;
    cin >> a >> b >> k;
    data_set[a] += k;
    data_set[b + 1] -= k;
  }
  long long score = 0;
  long long max_score = numeric_limits< long long >::min();
  REPE(i, 0, n + 1) {
    score += data_set[i];
    max_score = max(score, max_score);
  }
  cout << max_score << endl;
  return 0;
}
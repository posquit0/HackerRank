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

vector< int > guesses;

void
calc(int n, int a, int b) {
  if (a == b) {
    guesses.push_back(a * (n - 1));
  }
  else {
    REP(i, 0, n) {
      guesses.push_back(a * (n - 1 - i) + b * i);
    }
  }
}

int
main(int argc, char *argv[]) {
  int t, n, a, b;
  cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    guesses.clear();
    calc(n, min(a, b), max(a, b));
    for (auto c: guesses)
      cout << c << " ";
    cout << endl;
  }  
  return 0;
}
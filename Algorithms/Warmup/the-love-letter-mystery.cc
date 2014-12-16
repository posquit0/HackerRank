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

using namespace std;

#define REP(i, a, n) for (int i = a; i < (int) n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
calc(string s) {
  int size = s.length();
  int cost = 0;
  REP(i, 0, (size + 1) / 2) {
    int offset = abs(s[i] - s[size - (i + 1)]);
    if (offset) cost += offset;
  }
  return cost;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  REP(i, 0, t) {
    string s;
    cin >> s;
    cout << calc(s) << endl;
  }  
  return 0;
}
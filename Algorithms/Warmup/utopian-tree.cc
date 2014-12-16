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

using namespace std;

#define REP(i, a, n) for (int i = a; i < (int) n; i++)
#define FOR_ITER(c, it) for (typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define ALL(c) (c).begin(), (c).end()

const int MOD = 1000000007;
const double EPSILON = 1e-10;

int
height(int n) {
  int h = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2) h += 1;
    else h *= 2;
  }
  return h;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << height(n) << endl;
  }  
  return 0;
}
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
lonelyinteger(vector< int > a) {
  int result = 0;
  for(auto i: a) {
    result ^= i;
  }
  return result;
}

int
main(int argc, char *argv[]) {
  int res;
  int size;
  cin >> size;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  vector< int > a;
  int item;
  REP(i, 0, size) {
    cin >> item;
    a.push_back(item);
  }
  cout << lonelyinteger(a) << endl;

  return 0;
}
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
  vector< pair< int, int > > order_list;
  REPE(i, 0, n) {
    int t, d;
    cin >> t >> d;
    order_list.push_back(make_pair(t + d, i + 1));
  }
  sort(ALL(order_list));
  for (auto order : order_list) {
    cout << order.second << " ";
  }
  cout << endl;
  return 0;
}
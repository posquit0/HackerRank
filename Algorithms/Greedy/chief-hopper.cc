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
  stack< long long > heights;
  long long energy = 0;
  cin >> n;
  REP(n) {
    long long height;
    cin >> height;
    heights.push(height);
  }
  while (!heights.empty()) {
    energy = (energy + heights.top() + 1) / 2;
    heights.pop();
  }
  cout << energy << endl;
  return 0;
}
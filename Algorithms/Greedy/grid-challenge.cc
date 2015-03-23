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

bool
isValid(int n) {
  char arr[n][n];
  REPE(i, 0, n) {
    REPE(j, 0, n) {
      cin >> arr[i][j];
    }
    sort(arr[i], arr[i] + n);
  }
  REPE(i, 0, n - 1) {
    REPE(j, 0, n) {
      if (arr[i][j] > arr[i + 1][j])
        return false;
    }
  }
  return true;
}

int
main(int argc, char *argv[]) {
  int t, n;
  cin >> t;
  REP(t) {
    cin >> n;
    cout << (isValid(n) ? "YES" : "NO") << endl;
  }
  return 0;
}
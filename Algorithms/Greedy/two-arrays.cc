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

static int n, k;

bool
isExist(priority_queue< int > &arr1, priority_queue< int > &arr2) {
  REP(n) {
    if (arr1.top() - arr2.top() < k)
      return false;
    arr1.pop();
    arr2.pop();
  }
  return true;
}

int
main(int argc, char *argv[]) {
  int t;
  cin >> t;
  REP(t) {
    cin >> n >> k;

    priority_queue< int > arr1, arr2;
    int val;
    REP(n) {
      cin >> val;
      arr1.push(val);
    }
    REP(n) {
      cin >> val;
      arr2.push(-val);
    }
    cout << (isExist(arr1, arr2) ? "YES" : "NO") << endl;
  }  
  return 0;
}
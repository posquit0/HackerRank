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
  int n, p, q;
  cin >> n;
  int arr[n];
  REPE(i, 0, n) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  cin >> p >> q;
  int max_idx, max_difference = 0;
  if (p < arr[0]) {
    max_idx = p;
    max_difference = arr[0] - p;
  }
  if (q > arr[n - 1] && (q - arr[n - 1]) > max_difference) {
    max_idx = q;
    max_difference = (q - arr[n - 1]);
  }
  REPE(i, 0, n - 1) {
    int pivot = (arr[i + 1] + arr[i]) / 2;
    int difference = (arr[i + 1] - arr[i]) / 2;
    if (difference > max_difference && (pivot >= p && pivot <= q)) {
      max_idx = pivot;
      max_difference = difference;
    }
    if (pivot > q) {
      difference = min(arr[i + 1] - q, q - arr[i]);
      if (difference > max_difference) {
        max_idx = q;
        max_difference = difference;
      }
      break;
    }
  }
  cout << max_idx << endl;

  return 0;
}
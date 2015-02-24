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
getContiguousMaxSum(int arr[], int n) {
  int current_sum = 0;
  int max_sum = numeric_limits<int>::min();
  int max_start_idx = -1;
  int max_end_idx = -1;

  REPE(i, 0, n) {
    current_sum += arr[i];
    if (current_sum == 0) max_start_idx = i;
    if (current_sum > max_sum) {
      max_sum = current_sum;
      max_end_idx = i;
    }
    if (current_sum < 0) current_sum = 0;
  }
  return max_sum;
}

int
getNoncontiguousMaxSum(int arr[], int n) {
  int sum = 0;
  int negative_max = numeric_limits<int>::min();
  REPE(i, 0, n) {
    if (arr[i] > 0) sum += arr[i];
    if (arr[i] > negative_max) negative_max = arr[i];
  }
  return sum > 0 ? sum : negative_max;
}

int
main(int argc, char *argv[]) {
  int t, n;
  cin >> t;
  REP(t) {
    cin >> n;
    int arr[n];
    REPE(i, 0, n) {
      cin >> arr[i];
    }
    cout << getContiguousMaxSum(arr, n) << " " 
      << getNoncontiguousMaxSum(arr, n) << endl;
  }  
  return 0;
}
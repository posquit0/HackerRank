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

void
printArray(int arr[], int size) {
  REPE(i, 0, n) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void
largestPermuate(int arr[], int k) {
  int pivot = 0;
  int * max_val;
  while (k > 0) {
    if (pivot >= n) break;
    max_val = max_element(arr + pivot, arr + n);
    if (*max_val == arr[pivot]) {
      pivot++;
      continue;
    }
    swap(arr[pivot++], *max_val);
    --k;
  }
  printArray(arr, n);
}

int
main(int argc, char *argv[]) {
  cin >> n >> k;
  int arr[n];
  REPE(i, 0, n) {
    cin >> arr[i];
  }
  largestPermuate(arr, k);
  return 0;
}
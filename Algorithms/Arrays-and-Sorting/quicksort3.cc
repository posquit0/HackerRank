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

void
printArray(int * arr, int size) {
  REP(i, 0, size) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int
partitionByPivot(int * arr, int first, int last) {
  int pivot = last;
  bool flag = false;
  int spot = pivot;
  REP(i, first, last) {
    if ((!flag) && (arr[i] >= arr[pivot])) {
      flag = true;
      spot = i;
    }
    if (flag && (arr[i] < arr[pivot]))
      swap(arr[i], arr[spot++]);
  }
  swap(arr[spot], arr[pivot]);
  pivot = spot;
  return pivot;
}

void
quickSort(int * arr, int size, int first, int last) {
  if (first < last) {
    int pivot = partitionByPivot(arr, first, last);
    printArray(arr, size);
    quickSort(arr, size, first, pivot - 1);
    quickSort(arr, size, pivot + 1, last);
  }
}

int
main(int argc, char *argv[]) {
  int size;
  cin >> size;
  int arr[size];
  REP(i, 0, size) {
    cin >> arr[i];
  }  
  quickSort(arr, size, 0, size - 1);
  return 0;
}
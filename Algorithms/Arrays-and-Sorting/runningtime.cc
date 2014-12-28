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
insertionSort(vector< int > arr) {
  int size = arr.size();
  int cnt = 0;
  REP(i, 1, size) {
    int idx = i;
    int tmp = arr[idx];
    while (idx-- && arr[idx] > tmp) {
      arr[idx + 1] = arr[idx];
      cnt++;
    }
    arr[idx + 1] = tmp;
  }
  cout << cnt << endl;
}

int
main(int argc, char *argv[]) {
  vector< int > arr;
  int size;
  cin >> size;
  REP(i, 0, size) {
    int t;
    cin >> t;
    arr.push_back(t);
  }  
  insertionSort(arr);
  return 0;
}